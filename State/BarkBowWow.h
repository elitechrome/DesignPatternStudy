#ifndef BARKBOWWOW_H
#define BARKBOWWOW_H
#include "IBarkBehavior.h"
#include <iostream>
using namespace std;
class BarkBowWow : public IBarkBehavior
{
public:
    virtual void bark() override {cout << "(BowWow!)\n";}
    virtual ~BarkBowWow() override {}
};
#endif // BARKBOWWOW_H
