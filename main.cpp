#include <QCoreApplication>
#include "duck.h"
#include "redheadduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RedheadDuck *duck1 = new RedheadDuck();
    duck1->performFly();

    return a.exec();
}
