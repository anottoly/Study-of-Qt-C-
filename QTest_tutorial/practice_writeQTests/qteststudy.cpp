#include "qteststudy.h"
#include <QString>


void QTestStudy::toUpper()
{
    QString str = "Spunch Bob square pants!";
    QVERIFY(str.toUpper() == QString("SPUNCH BOB SQUARE PANTS!"));
    QCOMPARE(str.toUpper(), QString("SPUNCH BOB SQUARE PANTS!"));
}

void QTestStudy::toUpperUpdate()
{
    QFETCH(QString, result);
    QFETCH(QString, string);

    QCOMPARE(string.toUpper(), result);
}

void QTestStudy::toUpperUpdate_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("All lower") << QString("spunch bob square pants!") << QString("SPUNCH BOB SQUARE PANTS!");
    QTest::newRow("Mixed") << QString("Spunch Bob square pants!") << QString("SPUNCH BOB SQUARE PANTS!");
    QTest::newRow("All upper") << QString("SPUNCH BOB SQUARE PANTS!") << QString("SPUNCH BOB SQUARE PANTS!");
}



QTEST_MAIN(QTestStudy);
#include "qteststudy.moc"
