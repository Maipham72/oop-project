#include <string>

#include "Drinks.h"
#include "MenuItem.h"

/*BubbleTea class represents a bubble tea object. */
#ifndef BUBBLETEA_H
#define BUBBLETEA_H

class BubbleTea : public Drinks {  // inherits from the Drinks class
 private:
  std::string teaType;  // type of tea

 public:
  // Default Constructor
  BubbleTea() : Drinks(), teaType("") {}

  // Initialise a bubble tea object with the type of tea.
  BubbleTea(std::string teaType)
      : Drinks(100, 100, "BubbleTea", 7), teaType(teaType) {}

  // Sets the type of tea
  void setTeaType(std::string teaType) { this->teaType = teaType; }

  // Returns the type of tea
  std::string getTeaType() { return teaType; }

  // Print function
  void print() {
    std::cout << this->names << " is " << this->price
              << " dollars and has an ice level of " << this->getIceLevel()
              << " ,sugar level of " << this->getSugarLevel()
              << " and its tea type is " << this->teaType << ". Happy drinking!"
              << std::endl;
  }
};

#endif