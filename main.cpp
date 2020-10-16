#include <iostream>
#include <QtWidgets/QApplication>
#include "Presenter.h"
#include "View.h"


int main(int argc, char *argv[]) { //qt5 obligatoire
    QApplication app(argc, argv);

    Presenter *p=new Presenter();

    return app.exec();
}
