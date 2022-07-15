#include "fileworker.h"
#include <QTextStream>
#include <QFile>
#include <QIODevice>

FileWorker::FileWorker(QString filename)
{
    QFile file {filename};
    file.open(QIODevice::ReadWrite);
    if (!file.exists())
    {
        qWarning("Choose a correct filename, bro!");
    }
    else
    {
        this->filename = filename;
        this->file.setFileName(filename);
    }

}
