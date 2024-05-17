#include "hellowidget.h"

#include <iostream>
#include <QDebug>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    HelloWidget w;
    w.show();

    cout << "Hello World\n";
    qDebug() << "Hello World\n";

    return a.exec();
}
