#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "package-spec.h"

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++) {
        QString str = argv[i];
        if (str == "--version") {
            QString version = CONST_PACKAGE_VERSION;
            std::cout << "cppqt5 " << version.toStdString() << std::endl;
        }
        return 0;
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
