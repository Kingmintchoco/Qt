#include <iostream>
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    QPushButton btn("Close");

    // QObject::connect(sender, SIGNAL, receiver, SLOT);
    QObject::connect(&btn, SIGNAL(clicked(bool)), &a, SLOT(quit()));

    btn.show();
    return a.exec();
}