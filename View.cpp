//
// Created by j.mailly on 16/10/2020.
//

#include <QtWidgets/QFormLayout>
#include "View.h"

View::View(): QFrame() {

    QFormLayout *slide = new QFormLayout; //gestionnaire de fenêtres
   /******************Widgets*****************/
    KilVal=new QLabel();
    MilesVal=new QLabel();
    kil=new QSlider();
    kil->setOrientation(Qt::Orientation::Horizontal);
    mil=new QSlider();
    mil->setOrientation(Qt::Orientation::Horizontal);


/*****************************places dans la fenêtre*************************/

slide->addRow(new QLabel ("<center>Convertisseur kilometre/miles "));
slide->addRow(new QLabel("Kilometres"));
slide->addRow(KilVal, kil);
slide->addRow(new QLabel ("Miles"));
slide->addRow(MilesVal, mil);



setLayout (slide); //met en place le gest.placmt

}

QSlider *View::getkil() const {
    return kil;
}

QSlider *View::getmil() const {
    return mil;
}

QLabel *View::getKilVal() const {
    return KilVal;
}

QLabel *View::getMilesVal() const {
    return MilesVal;
}

void View::setMil(QSlider *mil) {
    View::mil = mil;
}

