#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Available drivers:";
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver, drivers)
       qDebug() << driver;

//    LOGINWINDOW loginwd;
//    loginwd.show();

//    MainWindow w;
//    w.setMinimumSize(600,400);
//    w.show();

    return a.exec();
}
