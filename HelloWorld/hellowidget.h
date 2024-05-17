#ifndef HELLOWIDGET_H
#define HELLOWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class HelloWidget;
}
QT_END_NAMESPACE

class HelloWidget : public QWidget
{
    Q_OBJECT

public:
    HelloWidget(QWidget *parent = nullptr);
    ~HelloWidget();

private:
    Ui::HelloWidget *ui;
};
#endif // HELLOWIDGET_H
