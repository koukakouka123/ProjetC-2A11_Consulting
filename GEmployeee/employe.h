#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Employe
{
private:
    int ID_EMPL;
    QString NOM;
    QString PRENOM;
    QString MAIL;
    QString TELEPHONE;
    QString ADRESSE;
    QString POSTE;
    QString DATE_EMBAUCHE;
    QString MOT_DE_PASSE;

public:
    // Constructors
    Employe();
    Employe(int ID_EMPL, const QString& NOM, const QString& PRENOM, const QString& MAIL,
            const QString& TELEPHONE, const QString& ADRESSE, const QString& POSTE,
            const QString& DATE_EMBAUCHE, const QString& MOT_DE_PASSE);

    // Getters
    int getID() const;
    QString getNOM() const;
    QString getPRENOM() const;
    QString getMAIL() const;
    QString getTELEPHONE() const;
    QString getADRESSE() const;
    QString getPOSTE() const;
    QString getDATE_EMBAUCHE() const;
    QString getMOT_DE_PASSE() const;

    // Setters
    void setID(int ID_EMPL);
    void setNOM(const QString& NOM);
    void setPRENOM(const QString& PRENOM);
    void setMAIL(const QString& MAIL);
    void setTELEPHONE(const QString& TELEPHONE);
    void setADRESSE(const QString& ADRESSE);
    void setPOSTE(const QString& POSTE);
    void setDATE_EMBAUCHE(const QString& DATE_EMBAUCHE);
    void setMOT_DE_PASSE(const QString& MOT_DE_PASSE);

    // Utility Methods
    bool IDExists(int ID_EMPL);

    // CRUD Methods
    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifier(int ID_EMPL, const QString& NOM, const QString& PRENOM, const QString& MAIL,
                  const QString& TELEPHONE, const QString& ADRESSE, const QString& POSTE,
                  const QString& DATE_EMBAUCHE, const QString& MOT_DE_PASSE);
    bool supprimer(int ID_EMPL);
    QSqlQueryModel* trierParDATE();

    exporterPDF(const QString& filePath);
};

#endif // EMPLOYE_H
