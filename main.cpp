/*
FileName	:MainWindow
Purpose     :
Authour     :Gururaj B M.
*/

#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QtMqtt/QMqttClient>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
