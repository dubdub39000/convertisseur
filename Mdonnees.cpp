//
// Created by j.mailly on 16/10/2020.
//

#include "Mdonnees.h"

Mdonnees::Mdonnees() : QObject() {
*multconvert=0.6213;
}

double *Mdonnees::getMultconvert() const {
    return multconvert;
}




