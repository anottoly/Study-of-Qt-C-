#include "fileworker.h"

int FileWorker::check_memorySizeByte ()
{
    QFile file (filename);
    if (file.exists())
        return file.size();
    return -1;
}
