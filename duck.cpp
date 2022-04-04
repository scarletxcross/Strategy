#include "duck.h"

Duck::Duck()
{

}

void Duck::swim() {
    cout << "plak-plak" << endl;
}

void Duck::performFly() {
    flyBehavior->fly();
}
