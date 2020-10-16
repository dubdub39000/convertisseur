//
// Created by j.mailly on 16/10/2020.
//
#include <QtWidgets/QMessageBox>
#include "Presenter.h"
#include "Mdonnees.h"


Presenter::Presenter() :QObject () {
    /******on instancie d'abord les deux classes viw et model**************/
view =new View();
mdonnees= new Mdonnees();

/****************************lier les deux slides******************/
QObject::connect(view->getkil(), &QSlider::valueChanged, this, &Presenter::majkil);
QObject::connect(view->getmil(), &QSlider::valueChanged, this, &Presenter::majmiles);

view->show();
/*****************************************************************/
}


void Presenter::majkil() {
    view->getKilVal()->setText(QString::number(view->getkil()->value()));
    view->getmil()->setValue(view->getMilesVal()->text().toDouble()* *mdonnees->getMultconvert());
}


void Presenter::majmiles() {
view->getMilesVal()->setText(QString::number(view->getmil()->value()));
view->getkil()->setValue(view->getKilVal()->text().toInt() / *mdonnees->getMultconvert());
}
