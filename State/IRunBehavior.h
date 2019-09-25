#ifndef IRUNBEHAVIOR_H
#define IRUNBEHAVIOR_H
class IRunBehavior
{
public:
    virtual void run() = 0;
    virtual ~IRunBehavior() = default;
};
#endif // IRUNBEHAVIOR_H
