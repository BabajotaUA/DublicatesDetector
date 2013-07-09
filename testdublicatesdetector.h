#pragma once

#include <QObject>
#include "filesearcher.h"

class TestDublicatesDetector : public QObject
{
    Q_OBJECT
    
private slots:
    void testFileSearcer();
    
};
