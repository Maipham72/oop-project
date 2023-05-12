#ifndef BUBBLETEA_H
#define BUBBLETEA_H
#include <string>

#include "drinks.h"
class BubbleTea : public Drinks {
 protected:
  std::string typeOfTea;
 public:
 //set default bubble tea
  BubbleTea() {
    this->name = "Bubble Tea";
    this->price = 5.50;
    this->iceLevel = 100;
    this->sugarLevel = 100;
    this->typeOfTea = "Black";
  }
  // Overriding previous function
  std::string getTypeOfTea() { return this->typeOfTea; };
  void setTypeOfTea(std::string tea) { typeOfTea = tea; }
};
#endif