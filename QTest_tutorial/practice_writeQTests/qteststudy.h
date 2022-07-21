#ifndef QTESTSTUDY_H
#define QTESTSTUDY_H
#include <QTest>
#include <QObject>

class QTestStudy : public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
    void toUpperUpdate_data();
    void toUpperUpdate();
};

#endif // QTESTSTUDY_H
