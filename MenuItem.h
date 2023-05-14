#include <string>
#include <iostream>
#ifndef MENUITEM_H
#define MENUITEM_H

class MenuItem {
  protected: 
    std::string names;
    float price;

  public:
    MenuItem(): names(""), price(0) {};
    MenuItem(std::string names, float price): names(names), price(price) {}

    void viewMenu() {
      std::cout << "Type 'Menu' to view menu: "<< std::endl;
    }

    virtual void print() {
      std::cout << this->names << "is " << this->price << "dollars" << std::endl;
    }

    float getPrice() {
      price = this->price;
    }

    std::string getName() {
      names = this->names;
    }

};

#endif