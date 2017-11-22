#include "mainwindow.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++) {
        QString str = argv[i];
        if (str == "--version") {
            std::cout << "cppqt5 version 0.1.0" << std::endl;
        }
        return 0;
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
