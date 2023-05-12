#ifndef COFFEE_H
#define COFFEE_H
#include "drinks.h"
class Coffee : public Drinks {
 protected:
  int caffeineLevel;

 public:
  Coffee() : caffeineLevel(0){};
  Coffee(int level) : Coffee(){};
};
#endif