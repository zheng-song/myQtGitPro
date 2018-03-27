#include "mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LOGINWINDOW loginwd;
    loginwd.show();

//    MainWindow w;
//    w.setMinimumSize(600,400);
//    w.show();

    return a.exec();
}
