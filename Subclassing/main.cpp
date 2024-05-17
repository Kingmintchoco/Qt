#include <QApplication>
#include <QWidget>
#include <mydialog.h>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    MyDialog* dialog = new MyDialog;
    dialog->show();

    return a.exec();
}