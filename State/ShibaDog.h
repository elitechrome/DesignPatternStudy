#ifndef SHIBADOG_H
#define SHIBADOG_H

#include "BaseDog.h"
#include "BarkBowWow.h"
#include "RunFast.h"

class ShibaDog : public BaseDog
{
    public:
    ShibaDog()
    {
        setBarkBehavior(new BarkBowWow);
        setRunBehavior(new RunFast);
    }
    virtual ~ShibaDog()
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
