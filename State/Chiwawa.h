#ifndef CHIWAWA_H
#define CHIWAWA_H
#include "BaseDog.h"
#include "BarkWang.h"
#include "RunSlow.h"

class Chiwawa : public BaseDog
{
    public:
    Chiwawa()
    {
        setBarkBehavior(new BarkWang);
        setRunBehavior(new RunSlow);
    }
    virtual ~Chiwawa()
    {
        if (barkBehavior)
        {
            delete barkBehavior;
        }
        if (runBehavior)
        {
            delete runBehavior;
        }
    }
};
#endif
