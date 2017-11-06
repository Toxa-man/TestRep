#include "testclass.h"

TestClass::TestClass(QObject *parent) : QObject(parent)
{

}

void TestClass::recieved()
{
    qDebug() << "HERE";
}
