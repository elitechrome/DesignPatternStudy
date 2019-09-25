#ifndef BASEDOG_H
#define BASEDOG_H
#include <iostream>
#include "IBarkBehavior.h"
#include "IRunBehavior.h"
using namespace std;
class BaseDog
{
public:
    BaseDog(): status(STATUS::SLEEP){}
    void doBark()
    {
        if (barkBehavior)
        {
            if (status != STATUS::SLEEP)
            {
                barkBehavior->bark();
            }
            else
            {
                cout << "Dog can bark when it wakes up.\n";
            }
        }
        else
        {
            cerr << "no instance of IBarkBehavior.\n";
        }
    }
    void setBarkBehavior(IBarkBehavior* _barkBehavior){ barkBehavior = _barkBehavior;}
    void setRunBehavior(IRunBehavior* _runBehavior){ runBehavior = _runBehavior;}

    enum class STATUS {SLEEP, IDLE, RUN} status;
    void printStatus()
    {
        switch (status) {
        case STATUS::SLEEP:
        cout << "Sleep\n";
            break;
        case STATUS::IDLE:
        cout << "Idle\n";
            break;
        case STATUS::RUN:
        cout << "Run\n";
            break;
        default:
            break;
        }
    }
    void handleEvent(STATUS _status)
    {
        if (status != _status)
        {
            switch (_status) {
            case STATUS::SLEEP:
                if (status == STATUS::IDLE)
                {
                    status = STATUS::SLEEP;
                    cout << "Sleep.\n";
                }
                else
                {
                    cout << "You must set the dog in idle state.\n";
                }
                break;
            case STATUS::IDLE:
                status = STATUS::IDLE;
                cout << "dog in peace.\n";
                break;
            case STATUS::RUN:
                if (status == STATUS::IDLE)
                {
                    status = STATUS::RUN;
                    cout << "Ask to run.\n";
                    doRun();
                }
                else
                {
                    cout << "You must wake up the dog first.\n";
                }
                break;
            default:
                break;
            }
        }
    }

protected:
    void doRun()
    {
        if (runBehavior)
        {
            if (status == STATUS::RUN)
            {
                runBehavior->run();
            }
            else
            {
                cout << "Dog can run in RUN state.\n";
            }
        }
        else
        {
            cerr << "no instance of IRunBehavior.\n";
        }
    }

    IBarkBehavior *barkBehavior;
    IRunBehavior *runBehavior;
};
#endif
