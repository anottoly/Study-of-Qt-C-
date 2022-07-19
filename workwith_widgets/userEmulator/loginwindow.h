#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include <QtWidgets>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class loginWindow : public QMainWindow
{
    Q_OBJECT
    Ui::LoginWindow *ui;
    QPushButton *click;

public:
    loginWindow(QWidget *parent = nullptr);
    void clicked();
    ~loginWindow();
};

#endif // LOGINWINDOW_H
