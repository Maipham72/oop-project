#ifndef PIZZA_H
#define PIZZA_H
#include <string>

#include "MenuItem.h"
class Pizza:public MenuItem {
 protected:
  std::string toppings;

 public:
  Pizza() : toppings(""){};
  void setToppings(std::string topping) { toppings = topping; }
  std::string getTopping() { return this->toppings; }
};
#endif