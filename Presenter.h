//
// Created by j.mailly on 16/10/2020.
//

#ifndef CONVERTISSEUR_PRESENTER_H
#define CONVERTISSEUR_PRESENTER_H

#include <QtCore/QObject>
#include "View.h"
#include "Mdonnees.h"

class Presenter : public QObject {
    Q_OBJECT
private:
View *view;
Mdonnees *mdonnees;
public:
    Presenter();

public slots :
    void majmiles();
    void majkil();
};


#endif //CONVERTISSEUR_PRESENTER_H
