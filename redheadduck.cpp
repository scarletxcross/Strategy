#include "redheadduck.h"

RedheadDuck::RedheadDuck()
{
    flyBehavior = new FlyWithWings();
}

void RedheadDuck::display() {
    cout << "krasnaya" << endl;
}
