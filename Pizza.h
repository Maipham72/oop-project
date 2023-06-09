#ifndef PIZZA_H
#define PIZZA_H
#include "MenuItem.h"

#include <iostream>
#include <string>

class Pizza : public MenuItem {
 private:
  std::string topping;
 public:
  // Default constructor
  Pizza() : MenuItem(), topping("") {}

  // Initialises a pizza object with its name, price and topping
  Pizza(std::string topping) : MenuItem("Pizza", 10), topping(topping) {}

  // Sets the type of topping
  void setTopping(std::string topping) { 
    this->topping = topping; 
  }

  // Returns the type of topping
  std::string getTopping() { return topping; }

    // Print function that overrides the one in the menuItem class
  void print() {
    std::cout << this->names << " is " << this->price
              << " dollars and its topping is " << this->topping << std::endl;
  }

  void printPizzaChoice();
};

#endif