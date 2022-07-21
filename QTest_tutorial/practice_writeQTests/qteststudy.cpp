#include "qteststudy.h"
#include <QString>


void QTestStudy::toUpper()
{
    QString str = "Spunch Bob square pants!";
    QVERIFY(str.toUpper() == QString("SPUNCH BOB SQUARE PANTS!"));
    QCOMPARE(str.toUpper(), QString("SPUNCH BOB SQUARE PANTS!"));


}
QTEST_APPLESS_MAIN(QTestStudy);
//#include "qteststudy.moc"
