#include "employe.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

// Constructeur par défaut
Employe::Employe() {
    ID_EMPL = 0;
    NOM = "";
    PRENOM = "";
    MAIL = "";
    TELEPHONE = "";
    ADRESSE = "";
    POSTE = "";
    DATE_EMBAUCHE = "";
    MOT_DE_PASSE = "";
}

// Constructeur avec paramètres
Employe::Employe(int ID_EMPL, const QString& NOM, const QString& PRENOM, const QString& MAIL,
                 const QString& TELEPHONE, const QString& ADRESSE, const QString& POSTE,
                 const QString& DATE_EMBAUCHE, const QString& MOT_DE_PASSE)
    : ID_EMPL(ID_EMPL), NOM(NOM), PRENOM(PRENOM), MAIL(MAIL), TELEPHONE(TELEPHONE),
    ADRESSE(ADRESSE), POSTE(POSTE), DATE_EMBAUCHE(DATE_EMBAUCHE), MOT_DE_PASSE(MOT_DE_PASSE) {}

// Getters
int Employe::getID() const { return ID_EMPL; }
QString Employe::getNOM() const { return NOM; }
QString Employe::getPRENOM() const { return PRENOM; }
QString Employe::getMAIL() const { return MAIL; }
QString Employe::getTELEPHONE() const { return TELEPHONE; }
QString Employe::getADRESSE() const { return ADRESSE; }
QString Employe::getPOSTE() const { return POSTE; }
QString Employe::getDATE_EMBAUCHE() const { return DATE_EMBAUCHE; }
QString Employe::getMOT_DE_PASSE() const { return MOT_DE_PASSE; }

// Setters
void Employe::setID(int ID_EMPL) { this->ID_EMPL = ID_EMPL; }
void Employe::setNOM(const QString& NOM) { this->NOM = NOM; }
void Employe::setPRENOM(const QString& PRENOM) { this->PRENOM = PRENOM; }
void Employe::setMAIL(const QString& MAIL) { this->MAIL = MAIL; }
void Employe::setTELEPHONE(const QString& TELEPHONE) { this->TELEPHONE = TELEPHONE; }
void Employe::setADRESSE(const QString& ADRESSE) { this->ADRESSE = ADRESSE; }
void Employe::setPOSTE(const QString& POSTE) { this->POSTE = POSTE; }
void Employe::setDATE_EMBAUCHE(const QString& DATE_EMBAUCHE) { this->DATE_EMBAUCHE = DATE_EMBAUCHE; }
void Employe::setMOT_DE_PASSE(const QString& MOT_DE_PASSE) { this->MOT_DE_PASSE = MOT_DE_PASSE; }

bool Employe::IDExists(int ID_EMPL ) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM EMPLOYE WHERE ID_EMPL = :ID_EMPL");
    query.bindValue(":ID_EMPL", ID_EMPL);
    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}



// Méthode pour ajouter un employé
bool Employe::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO EMPLOYE (ID_EMPL, NOM, PRENOM, MAIL, TELEPHONE, ADRESSE, POSTE, DATE_EMBAUCHE, MOT_DE_PASSE) "
                  "VALUES (:ID_EMPL, :NOM, :PRENOM, :MAIL, :TELEPHONE, :ADRESSE, :POSTE, :DATE_EMBAUCHE, :MOT_DE_PASSE)");

    query.bindValue(":ID_EMPL", ID_EMPL);

    query.bindValue(":NOM", NOM);
    query.bindValue(":PRENOM", PRENOM);
    query.bindValue(":MAIL", MAIL);
    query.bindValue(":TELEPHONE", TELEPHONE);
    query.bindValue(":ADRESSE", ADRESSE);
    query.bindValue(":POSTE", POSTE);
    query.bindValue(":DATE_EMBAUCHE", DATE_EMBAUCHE);
    query.bindValue(":MOT_DE_PASSE", MOT_DE_PASSE);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'ajout de l'employé:" << query.lastError().text();
        return false;
    }
    return true;
}

// Méthode pour afficher les employés
QSqlQueryModel* Employe::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Mail"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Téléphone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Poste"));
    return model;
}

bool Employe::modifier(int ID_EMPL, const QString& NOM, const QString& PRENOM, const QString& MAIL,
                       const QString& TELEPHONE, const QString& ADRESSE, const QString& POSTE,
                       const QString& DATE_EMBAUCHE, const QString& MOT_DE_PASSE)
{
    if (ID_EMPL <= 0) {
        qDebug() << "ID_EMPL non valide.";
        return false;
    }

    QStringList updateFields;

    if (!NOM.isEmpty()) { updateFields << "NOM = :NOM"; }
    if (!PRENOM.isEmpty()) { updateFields << "PRENOM = :PRENOM"; }
    if (!MAIL.isEmpty()) { updateFields << "MAIL = :MAIL"; }
    if (!TELEPHONE.isEmpty()) { updateFields << "TELEPHONE = :TELEPHONE"; }
    if (!ADRESSE.isEmpty()) { updateFields << "ADRESSE = :ADRESSE"; }
    if (!POSTE.isEmpty()) { updateFields << "POSTE = :POSTE"; }
    if (!DATE_EMBAUCHE.isEmpty()) { updateFields << "DATE_EMBAUCHE = :DATE_EMBAUCHE"; }
    if (!MOT_DE_PASSE.isEmpty()) { updateFields << "MOT_DE_PASSE = :MOT_DE_PASSE"; }

    if (updateFields.isEmpty()) {
        qDebug() << "Aucun champ à mettre à jour.";
        return false;
    }

    QString queryString = "UPDATE EMPLOYE SET " + updateFields.join(", ") + " WHERE ID_EMPL = :ID_EMPL";
    QSqlQuery query;
    query.prepare(queryString);

    if (!NOM.isEmpty()) query.bindValue(":NOM", NOM);
    if (!PRENOM.isEmpty()) query.bindValue(":PRENOM", PRENOM);
    if (!MAIL.isEmpty()) query.bindValue(":MAIL", MAIL);
    if (!TELEPHONE.isEmpty()) query.bindValue(":TELEPHONE", TELEPHONE);
    if (!ADRESSE.isEmpty()) query.bindValue(":ADRESSE", ADRESSE);
    if (!POSTE.isEmpty()) query.bindValue(":POSTE", POSTE);
    if (!DATE_EMBAUCHE.isEmpty()) query.bindValue(":DATE_EMBAUCHE", DATE_EMBAUCHE);
    if (!MOT_DE_PASSE.isEmpty()) query.bindValue(":MOT_DE_PASSE", MOT_DE_PASSE);

    query.bindValue(":ID_EMPL", ID_EMPL);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification de l'employé:" << query.lastError().text();
        return false;
    }
    return true;
}

// Méthode pour supprimer un employé
bool Employe::supprimer(int ID_EMPL) {
    QSqlQuery query;
    query.prepare("DELETE FROM EMPLOYE WHERE ID_EMPL = :ID_EMPL");
    query.bindValue(":ID_EMPL", ID_EMPL);
    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression de l'employé:" << query.lastError().text();
        return false;
    }
    return true;
}

QSqlQueryModel* Employe::trierParDATE() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYE ORDER BY DATE_EMBAUCHE ASC");
    return model;
}
