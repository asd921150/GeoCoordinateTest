#include "Google_API_Test.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Google_API_Test w;
    w.show();
    return a.exec();
}
