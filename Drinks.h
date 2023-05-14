#include <iostream>
#include <string>
#ifndef DRINKS_H
#define DRINKS_H

class Drinks {
  private:
    int iceLevel;
    int sugarLevel;
  
  public:
    Drinks() {
      iceLevel = 50;
      sugarLevel = 50;
    }

    Drinks(int iceLevel, int sugarLevel): iceLevel(iceLevel), sugarLevel(sugarLevel) {}

    void setIceLevel(int iceLevel) {
      iceLevel = this->iceLevel;
    }

    int getIceLevel() const{
      return iceLevel;
    } 

    void setSugarLevel(int sugarLevel){
      sugarLevel = this->sugarLevel;
    }

    int getSugarLevel() const{
      return sugarLevel;
    }
};

#endif