#ifndef DRINKS_H
#define DRINKS_H
#include <iostream>

#include "MenuItem.h"

class Drinks : public MenuItem {
 protected:
  int sugarLevel;
  int iceLevel;

 public:
  int getSugarLevel() { return this->sugarLevel; };
  int getIceLevel() { return this->iceLevel; };
  void setSugarLevel() { sugarLevel = 50; }
  void setIceLevel() { iceLevel = 50; }
};
#endif