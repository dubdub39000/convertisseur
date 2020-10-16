//
// Created by j.mailly on 16/10/2020.
//

#ifndef CONVERTISSEUR_MDONNEES_H
#define CONVERTISSEUR_MDONNEES_H


#include <QtCore/QObject>

class Mdonnees : public QObject{
Q_OBJECT

private:
double *multconvert;
public:
    //////////construct//////
    Mdonnees();
    /////////getter and setter////////
double *getMultconvert() const;
};


#endif //CONVERTISSEUR_MDONNEES_H
