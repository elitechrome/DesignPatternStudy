#ifndef IBARKBEHAVIOR_H
#define IBARKBEHAVIOR_H
class IBarkBehavior
{
public:
    virtual void bark() = 0;
    virtual ~IBarkBehavior() = default;
};
#endif // IBARKBEHAVIOR_H
