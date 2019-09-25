#ifndef BARKWANG_H
#define BARKWANG_H
#include "IBarkBehavior.h"
#include <iostream>
using namespace std;
class BarkWang : public IBarkBehavior
{
public:
    virtual void bark() override {cout << "(Wang)!\n";}
    virtual ~BarkWang() override{}
};
#endif // BARKBOWWOW_H
