#include <QApplication>
#include <QWidget>
#include <mydialog.h>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    MyDialog* dialog = new MyDialog;

    QObject::connect(dialog, SIGNAL(onKeywordMatched(const QString&)), &a, SLOT(quit()));
    
    dialog->show();

    return a.exec();
}