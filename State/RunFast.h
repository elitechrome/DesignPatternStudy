#ifndef RUNFAST_H
#define RUNFAST_H
#include "IRunBehavior.h"
#include <iostream>
using namespace std;
class RunFast : public IRunBehavior
{
public:
    virtual void run() override {cout << "(Run Fast!)\n";}
    virtual ~RunFast() override{}
};
#endif // RUNFAST_H
