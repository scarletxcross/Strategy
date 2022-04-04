#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>
using namespace std;

class FlyBehavior
{
public:
    FlyBehavior();
    virtual void fly() = 0;
};

#endif // FLYBEHAVIOR_H
