#ifndef FILEWORKER_H
#define FILEWORKER_H
#include <QTextStream>
#include <QFile>
#include <QIODevice>
#include <QFileInfo>

class FileWorker
{
    QString filename;
    QFile file;
public:
    FileWorker(QString filename);
    int check_memorySizeByte ();
    QString readAllFile()
    {
        //file.open(QIODevice::ReadWrite);

        return file.readLine();

    }
    void writein()
    {
        //file.open(QIODevice::ReadWrite);
        QTextStream out(&file);
        out << "ssh keys \n";
    }
    void openthefile()
    {
        file.open(QIODevice::ReadWrite);
    }
    void groupandowner()
    {
        QFileInfo info = filename;
        QTextStream out (stdout);
        out << info.group() << ' ' << info.owner() << Qt::endl;
    }
    ~FileWorker (){
        file.close();
    }
};

#endif // FILEWORKER_H
