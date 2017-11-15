#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    menuBar = new QMenuBar;
    createMenuBar(menuBar);
    setMenuBar(menuBar);

    QString icon = iconRoot + "/images/R.png";
    setWindowIcon(QIcon(icon));
    setWindowTitle("Routon V0.0.1");
}

MainWindow::~MainWindow()
{

}


void MainWindow::createMenuBar(QMenuBar *menuBar)
{
    projectMenu = new QMenu(tr("&Project"));
    QString iconDir=iconRoot + "/images/add.png";
    projectMenu->addAction(QIcon(iconDir),tr("&Open project"),this,SLOT(openProject()));
    iconDir=iconRoot + "/images/close1.png";
    projectMenu->addAction(QIcon(iconDir),tr("&Close project"),this,SLOT(closeProject()));
    projectMenu->addSeparator();
    projectMenu->addAction(tr("&Exit"),this,SLOT(exitApplication()));


    logSourceMenu = new QMenu("&Log Source");
    iconDir=iconRoot + "/images/textlog.png";
    logSourceMenu->addAction(QIcon(iconDir),tr("Open System Log Cache"),\
                             this,SLOT(openSysLogCache()));
    iconDir=iconRoot + "/images/clear.png";
    logSourceMenu->addAction(QIcon(iconDir),tr("Clear System Log Cache"),\
                             this,SLOT(clearSysLogCache()));

    viewMenu = new QMenu(tr("&View"));


    toolMenu = new QMenu(tr("&Tools"));
    iconDir=iconRoot + "/images/log.png";
    toolMenu->addAction(QIcon(iconDir),tr("Open Log File"),this,SLOT(openLogFile()));
    iconDir=iconRoot + "/images/close.png";
    toolMenu->addAction(QIcon(iconDir),tr("close Log File"),this,SLOT(closeLogFile()));
    toolMenu->addSeparator();
    iconDir=iconRoot + "/images/search.png";
    toolMenu->addAction(QIcon(iconDir),tr("Search File"),this,SLOT(findFile()));
    iconDir=iconRoot + "/images/back.png";
    toolMenu->addAction(QIcon(iconDir),tr("&Back"),this,SLOT(back()));
    toolMenu->addSeparator();
    iconDir=iconRoot + "/images/storage.png";
    toolMenu->addAction(QIcon(iconDir),tr("Storage Log File"),this,SLOT(storageLogFile()));


    helpMenu = new QMenu(tr("&Help"));
    iconDir=iconRoot + "/images/R.png";
    helpMenu->addAction(QIcon(iconDir),tr("About"),this,SLOT(InfoOFThisApp()));



    menuBar->addMenu(projectMenu);
    menuBar->addMenu(logSourceMenu);
    menuBar->addMenu(viewMenu);
    menuBar->addMenu(toolMenu);
    menuBar->addMenu(helpMenu);
}

void MainWindow::InfoOFThisApp()
{
    qDebug()<<"InfoOFThisApp!"<<endl;
}

void MainWindow::openLogFile()
{
    qDebug()<<"openLogFile!"<<endl;
}

void MainWindow::closeLogFile()
{
    qDebug()<<"closeLogFile!"<<endl;
}

void MainWindow::findFile()
{
    qDebug()<<"findFile!"<<endl;
}

void MainWindow::back()
{
    qDebug()<<"back!"<<endl;
}

void MainWindow::storageLogFile()
{
    qDebug()<<"storageLogFile!"<<endl;
}


void MainWindow::clearSysLogCache()
{
    qDebug()<<"clearSysLogCache!"<<endl;
}

void MainWindow::openSysLogCache()
{
    qDebug()<<"openSysLogCache!"<<endl;
}

void MainWindow::openProject()
{
    qDebug()<<"openProject!"<<endl;
}

void MainWindow::closeProject()
{
    qDebug()<<"closeProject!"<<endl;
}

void MainWindow::exitApplication()
{
    qDebug()<<"exitApplication"<<endl;
}

