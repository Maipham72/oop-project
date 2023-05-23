#include <iostream>
#include <string>
using namespace std;
#ifndef MENUITEM_H
#define MENUITEM_H

// this class represent the items in the menu
class MenuItem {
 protected:
  std::string names;
  float price;

 public:
  // Default constructor
  MenuItem() : names(""), price(0){};
  MenuItem(std::string names, float price) : names(names), price(price) {}

  // A virtual print function to be overridden
  virtual void print() {
    std::cout << this->names << "is " << this->price << " dollars" << std::endl;
  }

  // Returns the price of the item
  float getPrice() { return this->price; }

  // Returns the name of the item
  std::string getName() { return this->names; }
};

#endif