#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

class QMenu;
class QPushButton;
class QDialog;
class QCheckBox;
class QHBoxLayout;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QMenu *projectMenu;
    QMenu *logSourceMenu;
    QMenu *viewMenu;
    QMenu *toolMenu;
    QMenu *helpMenu;

    QMenuBar *menuBar;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    const QString iconRoot =QDir::currentPath();

    void createMenuBar(QMenuBar *menuBar);
    void createToolBar(QToolBar *toolBar);
    void createStatusBar(QStatusBar *statusBar);

private slots:
    void openProject();
    void closeProject();
    void exitApplication();

    void openSysLogCache();
    void clearSysLogCache();

    void openLogFile();
    void closeLogFile();
    void findFile();
    void back();
    void storageLogFile();
    void openPort();
    void closePort();

    void InfoOFThisApp();
};

#endif // MAINWINDOW_H
