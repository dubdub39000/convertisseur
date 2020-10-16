//
// Created by j.mailly on 16/10/2020.
//

#ifndef CONVERTISSEUR_VIEW_H
#define CONVERTISSEUR_VIEW_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QSlider>

class View : public QFrame{
private:
    QLabel *KilVal;
    QLabel *MilesVal;

    QSlider *kil;
    QSlider *mil;

public :
    View();
    //////////getter//////
    QSlider *getkil() const;
    QSlider *getmil() const;

    QLabel *getKilVal() const;
    QLabel *getMilesVal() const;
};


#endif //CONVERTISSEUR_VIEW_H
