#ifndef RUNSLOW_H
#define RUNSLOW_H
#include "IRunBehavior.h"
#include <iostream>
using namespace std;
class RunSlow : public IRunBehavior
{
public:
    virtual void run() override {cout << "(Run Slow!)\n";}
    virtual ~RunSlow() override{}
};
#endif // RUNSLOW_H
