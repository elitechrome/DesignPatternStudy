#include <iostream>
#include <memory>
#include <utility>

#include "ShibaDog.h"
#include "Chiwawa.h"

using namespace std;

int main()
{
  shared_ptr<BaseDog> dog1 = make_shared<ShibaDog>();
  shared_ptr<BaseDog> dog2 = make_shared<Chiwawa>();

  while(1)
  {
    char c;
    std::cout << std::endl << "q=wake up/idle, w=sleep, e=run, r=bark ? ";
    std::cin >> c;
    switch(c)
    {
    case 'q':
      dog1->handleEvent(BaseDog::STATUS::IDLE);
      break;
    case 'w':
      dog1->handleEvent(BaseDog::STATUS::SLEEP);
      break;
    case 'e':
      dog1->handleEvent(BaseDog::STATUS::RUN);
      break;
    case 'r':
      dog1->doBark();
      break;
    default:
      std::cout << "> Invalid input" << std::endl;
    };
  }
}
