#include "filesearcher.h"

FileSearcher::FileSearcher(QObject *parent) :
    QObject(parent)
{
}

QList<QString> FileSearcher::getDirectoryList() const
{
    return directoryList;
}

void FileSearcher::setDirectoryList(const QList<QString> &value)
{
    directoryList = value;
}

QList<QString> FileSearcher::getFileList() const
{
    return fileList;
}

void FileSearcher::setFileList(const QList<QString> &value)
{
    fileList = value;
}

