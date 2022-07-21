#include "qteststudy.h"
#include <QString>
#include <QLineEdit>

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

void QTestStudy::guiTest()
{
    QLineEdit lineedit;

    QTest::keyClicks(&lineedit, "Holy cheese...");
    QCOMPARE(lineedit.text(), QString("Holy cheese..."));
}

void QTestStudy::guiTestUpdate()
{
    QFETCH(QTestEventList, event);
    QFETCH(QString, expected);

    QLineEdit line;
    event.simulate(&line);

    QCOMPARE(line.text(), expected);
}

void QTestStudy::guiTestUpdate_data()
{
    QTest::addColumn<QTestEventList>("event");
    QTest::addColumn<QString>("expected");

    QTestEventList list1;
    list1.addKeyClick('a');
    QTest::newRow("char") << list1 << "a";

    QTestEventList list2;
    list2.addKeyClick('x');
    list2.addKeyClick('y');
    list2.addKeyClick('N');
    list2.addKeyClick(Qt::Key_Backspace);
    list2.addKeyClick('z');
    QTest::newRow("Oops, it's okay...") << list2 << "xyz";
}

void QTestStudy::testBenchmark()
{
    QString one = QLatin1String("Test text");
    QString two = QLatin1String("Test text");

    QCOMPARE(two.localeAwareCompare(one), 0);

    QBENCHMARK
    {
        one.localeAwareCompare(two);
    }
}

void QTestStudy::testString()
{
    QFETCH(bool, useLocalCompare);
    QString one = QLatin1String("Test text");
    QString two = QLatin1String("Test text");
    int result;

    if (useLocalCompare)
    {
        QBENCHMARK
        {
            result = one.localeAwareCompare(two);
        }
    }
    else
    {
        QBENCHMARK
        {
            result = (one == two);
        }
    }
    Q_UNUSED(result);

}

void QTestStudy::testString_data()
{
    QTest::addColumn<bool>("useLocalCompare");

    QTest::newRow("local aware compare") << true;
    QTest::newRow("standart compare") << false;
}

void QTestStudy::skipTest()
{
    QFETCH(bool, boolvalue);
    Q_UNUSED(boolvalue);

    QSKIP("Hi, guys");
}

void QTestStudy::skipTest_data()
{
    QTest::addColumn<bool>("boolvalue");

    QTest::newRow("True") << true;
    QTest::newRow("False") << false;

    QSKIP("skipping all");
}

QTEST_MAIN(QTestStudy);
#include "qteststudy.moc"
