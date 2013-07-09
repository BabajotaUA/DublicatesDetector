#pragma once

#include <QObject>

class FileSearcher : public QObject
{
    Q_OBJECT
public:
    explicit FileSearcher(QObject *parent = 0);
    virtual ~FileSearcher() {}

    QList<QString> getDirectoryList() const;
    void setDirectoryList(const QList<QString> &value);

    QList<QString> getFileList() const;

    void runFileSearch(QList<QString> directories);

private:
    QList<QString> directoryList;
    QList<QString> fileList;

};
