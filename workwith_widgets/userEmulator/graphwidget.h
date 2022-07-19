#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H
#include <QWidget>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class graphwidget; }
QT_END_NAMESPACE

class GraphWidget : public QWidget
{
    Q_OBJECT
    Ui::graphwidget *ui;

    int line_quan = 5;
    const int column_quan = 4;
public:
    GraphWidget(QWidget *parent = nullptr);
    void addnewline();
    void savefile();
    void readfile();
    void cleantable();

    ~GraphWidget();
};

#endif // GRAPHWIDGET_H
