#ifndef BURGER_H
#define BURGER_H
#include <string>
#include "MenuItem.h"

class Burger: public MenuItem {
  private:
    std::string meatType;
    std::string bunType;
  
  public:
    Burger(): MenuItem(), meatType(""), bunType("") {}
    Burger(std::string meatType, std::string bunType): MenuItem(names, price), meatType(meatType), bunType(bunType){}

    void setMeatType(std::string meatType) {
      meatType = this->meatType;
    }

    std::string getMeatType() {
      return meatType;
    }

    void setBunType(std::string bunType){
      bunType = this->bunType;
    }

    std::string getBunType(){
      return bunType;
    }
};

#endif