#include <QDialog>

class MyDialog : public QDialog{
public:
    explicit MyDialog(QWidget* parent = nullptr);
    void closeEvent(QCloseEvent *event);
};