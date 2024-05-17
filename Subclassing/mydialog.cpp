#include "mydialog.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <QLineEdit>
#include <QVBoxLayout>

MyDialog::MyDialog(QWidget* parent):QDialog(parent){ 
    lineEdit = new QLineEdit;

    connect(lineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(myTextChanged(const QString&)));

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(lineEdit);

    setLayout(layout);   
}

void MyDialog::closeEvent(QCloseEvent *event){
    QMessageBox::StandardButton answer = 
        QMessageBox::question(this, "Title", "exit?", QMessageBox::Yes | QMessageBox::No);
    
    if(answer == QMessageBox::Yes)
        event->accept();            // event를 허용
    else
        event->ignore();            // event를 거절
}

void MyDialog::myTextChanged(const QString& text){
    if(text == "s2hyun"){
        emit onKeywordMatched(text);
    }
}