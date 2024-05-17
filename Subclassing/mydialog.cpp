#include "mydialog.h"
#include <QMessageBox>
#include <QCloseEvent>

MyDialog::MyDialog(QWidget* parent):QDialog(parent){    
}

void MyDialog::closeEvent(QCloseEvent *event){
    QMessageBox::StandardButton answer = 
        QMessageBox::question(this, "Title", "exit?", QMessageBox::Yes | QMessageBox::No);
    
    if(answer == QMessageBox::Yes)
        event->accept();            // event를 허용
    else
        event->ignore();            // event를 거절
}