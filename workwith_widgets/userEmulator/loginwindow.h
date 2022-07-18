#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include <QtWidgets>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class loginWindow : public QWidget
{
    Q_OBJECT
    Ui::LoginWindow *ui;

public:
    loginWindow(QWidget *parent = nullptr);

    ~loginWindow();
};

#endif // LOGINWINDOW_H
