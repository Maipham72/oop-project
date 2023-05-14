
#include <string>
#include "Drinks.h"
#ifndef COFFEE_H
#define COFFEE_H

class Coffee : public Drinks {
 private:
  int caffeineLevel;

 public:
  // Default constructor
  Coffee() : Drinks(), caffeineLevel(0) {}

  /*Initialises a coffee object with its caffeine level, price, ice and sugar
   * level */
  Coffee(int caffeineLevel)
      : Drinks(100, 100, "Coffee", 6.5), caffeineLevel(caffeineLevel) {}

  // Set the caffeine level
  void setCaffeineLevel(int caffeineLevel) {
    caffeineLevel = this->caffeineLevel;
  }

  // Returns the caffeine level
  int getCaffeineLevel() const { return caffeineLevel; }

  // Prints the name, price, ice, sugar and caffeine level of the coffee object
  void print() {
    std::cout << this->names << " is " << this->price
              << " dollars and has an ice level of " << this->getIceLevel()
              << " , sugar level of " << this->getSugarLevel()
              << " and a caffeine level of" << this->caffeineLevel << std::endl;
  }
};

#endif