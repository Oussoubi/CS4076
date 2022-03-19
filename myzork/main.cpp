#include "myzork.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myzork w;
    w.show();
    return a.exec();
}
