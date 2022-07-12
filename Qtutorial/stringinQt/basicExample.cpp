#include <QString>
#include <QTextStream>

int main(void)
{
    QTextStream cout(stdout);
    
    QString a {"goose"};
    a.append (" is a baaaad guy")
    a.prepebd ("Our ")
    cout << a << endl;
    cout << "Here're a " << a.count() << " symbols";
    cout << a.toUpper() 
    << endl;
    cout << a.toLower()
    << endl;
    return 0;
}