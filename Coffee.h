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
    this->caffeineLevel = caffeineLevel;
  }

  // Returns the caffeine level
  int getCaffeineLevel() { return caffeineLevel; }

  // Prints the name, price, ice, sugar and caffeine level of the coffee object
  void print() {
    std::cout << this->names << " is " << this->price
              << " dollars and has an ice level of " << this->getIceLevel()
              << " ,sugar level of " << this->getSugarLevel() << std::endl;
  }
};

#endif