#include <Drinks.h>
#include <string>
#ifndef COFFEE_H
#define COFFEE_H

class Coffee : public Drinks {
  private:
    int caffeineLevel;

  public:
    Coffee(): Drinks(), caffeineLevel(0) {}
    Coffee(int caffeineLevel): Drinks(iceLevel,sugarLevel), caffeineLevel(caffeineLevel) {}

    void setCaffeineLevel(int caffeineLevel) {
      caffeineLevel = this->caffeineLevel;
    }

    int getCaffeineLevel() const {
      return caffeineLevel;
    }
};

#endif