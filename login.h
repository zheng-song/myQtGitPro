#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QPushButton;
class QLineEdit;
class QLabel;
QT_END_NAMESPACE

class LOGINWINDOW:public QWidget
{
    Q_OBJECT
public:
    LOGINWINDOW(QWidget *parent = NULL);
    ~LOGINWINDOW();

private slots:
    void loginBtClicked();
    void cancelBtClicked();

private:
    QPushButton *loginBt;
    QPushButton *cancelBt;
    QLineEdit   *nameEdit;
    QLineEdit   *passwdEdit;
    QLabel      *nameLabel;
    QLabel      *passwdLabel;

};
#endif // LOGIN_H
