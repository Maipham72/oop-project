#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <MenuItem.h>
#include <string>

class Pizza : public MenuItem {
  private:
    std::string topping;
  
  public: 
    Pizza(): MenuItem(),topping("") {}
    Pizza(std::string topping): MenuItem(names, price),topping(topping){}

    void setTopping(std::string topping) {
      topping = this->topping;
    }

    std::string getTopping() {
      return topping;
    }

};

#endif