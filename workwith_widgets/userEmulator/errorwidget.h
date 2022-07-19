#ifndef ERRORWIDGET_H
#define ERRORWIDGET_H
#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class errorwidget; }
QT_END_NAMESPACE

class ErrorWidget : public QWidget
{
    Q_OBJECT
    Ui::errorwidget *ui;

public:
    ErrorWidget( QString *str = (new QString("Oops smth errors try another way")), QWidget *parent = nullptr);

    ~ErrorWidget();
};

#endif // ERRORWIDGET_H
