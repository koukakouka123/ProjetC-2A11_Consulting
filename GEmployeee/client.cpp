#include "client.h"
#include "qdatetime.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

Client::Client() {
    ID_CLI = 0;
    TEL_CLI = 0;
    POINTS_FIDELITE = 0;
}

Client::Client(int ID_CLI, const QString& NOM_CLI, const QString& EMAIL_CLI,
               int TEL_CLI, const QString& ADR_CLI)
    : ID_CLI(ID_CLI), NOM_CLI(NOM_CLI), EMAIL_CLI(EMAIL_CLI),
      ADR_CLI(ADR_CLI), TEL_CLI(TEL_CLI) {}

int Client::getID() const { return ID_CLI; }
QString Client::getNOM() const { return NOM_CLI; }
QString Client::getEMAIL() const { return EMAIL_CLI; }
int Client::getTEL() const { return TEL_CLI; }
QString Client::getADRESSE() const { return ADR_CLI; }
QString Client::getTYPE() const { return TYPE_CLI; }
int Client::getPoints() const { return POINTS_FIDELITE; }

void Client::setID(int ID_CLI) { this->ID_CLI = ID_CLI; }
void Client::setNOM(const QString& NOM_CLI) { this->NOM_CLI = NOM_CLI; }
void Client::setEMAIL(const QString& EMAIL_CLI) { this->EMAIL_CLI = EMAIL_CLI; }
void Client::setTEL(int TEL_CLI) { this->TEL_CLI = TEL_CLI; }
void Client::setADRESSE(const QString& ADR_CLI) { this->ADR_CLI = ADR_CLI; }

bool Client::IDExists(int ID_CLI) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM CLIENT WHERE ID_CLI = :ID_CLI");
    query.bindValue(":ID_CLI", ID_CLI);
    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}

bool Client::emailExiste(QString email) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM CLIENT WHERE EMAIL_CLI = :email");
    query.bindValue(":email", email);
    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}

int Client::getPointsParEmail(QString email) {
    QSqlQuery query;
    query.prepare("SELECT POINTS_FIDELITE FROM CLIENT WHERE EMAIL_CLI = :email");
    query.bindValue(":email", email);
    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    }
    return 0;
}

QString Client::calculerTypeParPoints(int points) {
    if (points == 0) return "NORMAL";
    else if (points == 1) return "FIDELE 5% *";
    else if (points == 2) return "FIDELE 10% **";
    else if (points == 3) return "FIDELE 15% ***";
    else if (points == 4) return "FIDELE 20% ****";
    else return "FIDELE 25% *****";
}

bool Client::ajouter() {
    QSqlQuery query;

    // Vérifier si l'email existe déjà
    if (emailExiste(EMAIL_CLI)) {
        // Client existant : on met à jour les points
        int newPoints = getPointsParEmail(EMAIL_CLI) + 1;
        QString newType = calculerTypeParPoints(newPoints);

        query.prepare("UPDATE CLIENT SET POINTS_FIDELITE = :points, TYPE_CLI = :type WHERE EMAIL_CLI = :email");
        query.bindValue(":points", newPoints);
        query.bindValue(":type", newType);
        query.bindValue(":email", EMAIL_CLI);

        bool success = query.exec();
        if (success) {
            // Enregistrer l'historique pour la mise à jour
            logHistorique("UPDATE", ID_CLI, NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI,
                          NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI);
        }
        return success;
    } else {
        // Nouveau client : on insère un nouveau client
        int newPoints = 0;
        QString newType = calculerTypeParPoints(newPoints);

        query.prepare("INSERT INTO CLIENT (ID_CLI, NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI, TYPE_CLI, POINTS_FIDELITE) "
                      "VALUES (:ID, :nom, :email, :tel, :adr, :type, :points)");
        query.bindValue(":ID", ID_CLI);
        query.bindValue(":nom", NOM_CLI);
        query.bindValue(":email", EMAIL_CLI);
        query.bindValue(":tel", TEL_CLI);
        query.bindValue(":adr", ADR_CLI);
        query.bindValue(":type", newType);
        query.bindValue(":points", newPoints);

        bool success = query.exec();
        if (success) {
            // Enregistrer l'historique pour l'ajout
            logHistorique("INSERT", ID_CLI, NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI,
                          NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI);
        }
        return success;
    }
}


bool Client::supprimer(int ID_CLI) {
    // Récupérer les données du client avant suppression
    QSqlQuery querySelect;
    querySelect.prepare("SELECT NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI FROM CLIENT WHERE ID_CLI = :id");
    querySelect.bindValue(":id", ID_CLI);

    if (!querySelect.exec() || !querySelect.next()) {
        qDebug() << "Erreur lors de la récupération des données du client avant suppression.";
        return false;
    }

    QString nomAvant = querySelect.value(0).toString();
    QString emailAvant = querySelect.value(1).toString();
    int telAvant = querySelect.value(2).toInt();
    QString adrAvant = querySelect.value(3).toString();

    // Exécution de la suppression du client
    QSqlQuery queryDelete;
    queryDelete.prepare("DELETE FROM CLIENT WHERE ID_CLI = :ID");
    queryDelete.bindValue(":ID", ID_CLI);

    bool ok = queryDelete.exec();
    if (ok) {
        // Log l'action de suppression dans l'historique
        logHistorique("DELETE", ID_CLI, nomAvant, emailAvant, telAvant, adrAvant, "", "", 0, "");
    }

    return ok;
}


bool Client::modifier(int ID_CLI, const QString& NOM_CLI, const QString& EMAIL_CLI,
                      int TEL_CLI, const QString& ADR_CLI)
{
    QSqlQuery query;
    QStringList fields;
    QMap<QString, QVariant> values;

    // Récupérer l'état avant modification
    QSqlQuery querySelect;
    querySelect.prepare("SELECT NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI FROM CLIENT WHERE ID_CLI = :id");
    querySelect.bindValue(":id", ID_CLI);
    if (!querySelect.exec() || !querySelect.next()) {
        qDebug() << "Erreur lors de la récupération des données avant modification.";
        return false;
    }

    // Valeurs avant modification
    QString nomAvant = querySelect.value(0).toString();
    QString emailAvant = querySelect.value(1).toString();
    int telAvant = querySelect.value(2).toInt();
    QString adrAvant = querySelect.value(3).toString();

    // Ajouter seulement les champs non vides / valides
    if (!NOM_CLI.isEmpty()) {
        fields << "NOM_CLI = :nom";
        values[":nom"] = NOM_CLI;
    }
    if (!EMAIL_CLI.isEmpty()) {
        fields << "EMAIL_CLI = :email";
        values[":email"] = EMAIL_CLI;
    }
    if (TEL_CLI != 0) {
        fields << "TEL_CLI = :tel";
        values[":tel"] = TEL_CLI;
    }
    if (!ADR_CLI.isEmpty()) {
        fields << "ADR_CLI = :adr";
        values[":adr"] = ADR_CLI;
    }

    // Si rien n’a été modifié, on quitte
    if (fields.isEmpty()) {
        return false;
    }

    // Construire la requête de modification
    QString sql = "UPDATE CLIENT SET " + fields.join(", ") + " WHERE ID_CLI = :id";
    query.prepare(sql);
    query.bindValue(":id", ID_CLI);

    // Lier les valeurs modifiées
    for (auto it = values.begin(); it != values.end(); ++it) {
        query.bindValue(it.key(), it.value());
    }

    bool success = query.exec();
    if (success) {
        // Enregistrer dans l'historique : avant et après modification
        logHistorique("UPDATE", ID_CLI, nomAvant, emailAvant, telAvant, adrAvant,
                      NOM_CLI.isEmpty() ? nomAvant : NOM_CLI,
                      EMAIL_CLI.isEmpty() ? emailAvant : EMAIL_CLI,
                      TEL_CLI == 0 ? telAvant : TEL_CLI,
                      ADR_CLI.isEmpty() ? adrAvant : ADR_CLI);
    }

    return success;
}


QSqlQueryModel* Client::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT ID_CLI, NOM_CLI, EMAIL_CLI, TEL_CLI, ADR_CLI, TYPE_CLI, POINTS_FIDELITE FROM CLIENT");
    return model;
}


QSqlQueryModel* Client::trierParNom() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM CLIENT ORDER BY NOM_CLI ASC");
    return model;
}
void Client::logHistorique(const QString& action, int idClient, const QString& nomAvant, const QString& emailAvant, int telAvant, const QString& adrAvant,
                           const QString& nomApres, const QString& emailApres, int telApres, const QString& adrApres)
{
    QFile file("historique.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        qWarning() << "Impossible d'ouvrir historique.txt pour écriture";
        return;
    }

    QTextStream out(&file);
    QString timestamp = QDateTime::currentDateTime().toString(Qt::ISODate);

    // Log format : Timestamp | Action | ID Client | Changement
    out << timestamp
        << " | " << action
        << " | ID: " << idClient
        << " | Avant [Nom: " << nomAvant
        << ", Email: " << emailAvant
        << ", Tel: " << telAvant
        << ", Adresse: " << adrAvant
        << "] | Après [Nom: " << nomApres
        << ", Email: " << emailApres
        << ", Tel: " << telApres
        << ", Adresse: " << adrApres
        << "]\n";
    file.close();
}
