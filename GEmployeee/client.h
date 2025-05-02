#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QSqlQueryModel>

class Client
{
public:
    Client();
    Client(int ID_CLI, const QString& NOM_CLI, const QString& EMAIL_CLI,
           int TEL_CLI, const QString& ADR_CLI);

    int getID() const;
    QString getNOM() const;
    QString getEMAIL() const;
    int getTEL() const;
    QString getADRESSE() const;
    QString getTYPE() const;
    int getPoints() const;

    void setID(int ID_CLI);
    void setNOM(const QString& NOM_CLI);
    void setEMAIL(const QString& EMAIL_CLI);
    void setTEL(int TEL_CLI);
    void setADRESSE(const QString& ADR_CLI);

    bool ajouter();
    bool supprimer(int ID_CLI);
    bool modifier(int ID_CLI, const QString& NOM_CLI, const QString& EMAIL_CLI,
                  int TEL_CLI, const QString& ADR_CLI);
    QSqlQueryModel* afficher();
    QSqlQueryModel* trierParNom();
    bool IDExists(int ID_CLI);
    bool emailExiste(QString email);
    int getPointsParEmail(QString email);
    QString calculerTypeParPoints(int points);
private:
    int ID_CLI;
    QString NOM_CLI, EMAIL_CLI, ADR_CLI, TYPE_CLI;
    int TEL_CLI, POINTS_FIDELITE;
    void logHistorique(const QString& action, int idClient, const QString& nomAvant, const QString& emailAvant, int telAvant, const QString& adrAvant, const QString& nomApres, const QString& emailApres, int telApres, const QString& adrApres);
};

#endif // CLIENT_H
