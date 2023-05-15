#include <iostream>
#include <string>

#include "MenuItem.h"
#ifndef DRINKS_H
#define DRINKS_H

class Drinks : public MenuItem {
 private:
  int iceLevel; 
  int sugarLevel;

 public:
  // Default constructor
  Drinks() {
    this->names = "Drinks"; // 
    this->price = 0;
    this->iceLevel = 100;
    this->sugarLevel = 100;
  }

  /*Initialises a drink object with iceLevel and sugarLevel*/
  Drinks(int iceLevel, int sugarLevel, std::string name, float price)
      : iceLevel(iceLevel), sugarLevel(sugarLevel) {
    this->names = name;
    this->price = price;
  }

  // Sets the ice level of the drink
  void setIceLevel(int iceLevel) { iceLevel = this->iceLevel; }

  // Returns the ice level of the drink
  int getIceLevel() const { return iceLevel; }

  // Sets the sugar level of the drink
  void setSugarLevel(int sugarLevel) { sugarLevel = this->sugarLevel; }

  // Returns the sugar level of the drink
  int getSugarLevel() const { return sugarLevel; }

  // print function
  void print() {
    std::cout << this->names << "is " << this->price
              << "dollars and has an ice level of " << this->getIceLevel()
              << " , sugar level of " << this->getSugarLevel() << std::endl;
  }
};

#endif