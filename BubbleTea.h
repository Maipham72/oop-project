#include <Drinks.h>
#include <string>
#ifndef BUBBLETEA_H
#define BUBBLETEA_H

class BubbleTea : public Drinks {
  private:
    std::string teaType;
  
  public:
    BubbleTea(): Drinks(), teaType("") {}

    BubbleTea(std::string teaType): Drinks(iceLevel, sugarLevel), teaType(teaType) {}

    void setTeaType(std::string teaType) {
      teaType = this->teaType;
    }

    std::string getTeaType() {
      return TeaType;
    }

};

#endif