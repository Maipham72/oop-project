#ifndef BURGER_H
#define BURGER_H
#include <string>

#include "MenuItem.h"

class Burger : public MenuItem {
 private:
  std::string meatType;
  std::string bunType;

 public:
  // Default constructor
  Burger() : MenuItem(), meatType(""), bunType("") {}

  /*Initialises a burger object with its meat type, bun type, price and name*/
  Burger(std::string meatType, std::string bunType)
      : MenuItem("Burger", 9.50), meatType(meatType), bunType(bunType) {}

  // Sets the type of meat
  void setMeatType(std::string meatType) { meatType = this->meatType; }

  // Returns the type of meat
  std::string getMeatType() { return meatType; }

  // Sets the type of bun
  void setBunType(std::string bunType) { bunType = this->bunType; }

  // Returns the type of bun
  std::string getBunType() { return bunType; }

  // Print function that overrides the one in the menuItem class
  void print() {
    std::cout << this->names << "is " << this->price
              << "dollars and its bun type is " << this->bunType
              << " , and meat type of of " << this->meatType;
  }
};

#endif