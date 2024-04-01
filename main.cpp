#include "BigPicture.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BigPicture w;
    
    w.showMaximized();
    return a.exec();
}
