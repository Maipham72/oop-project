#include <string>
#include <iostream>
#ifndef MENUITEM_H
#define MENUITEM_H


class MenuItem {
 protected:
  std::string name;
  float price;

 public:
 void viewMenu(){
  
 }
 float getPrice(){
  return this->price;
 }
  virtual void print() {
    std::cout << this->name << " and its price is : " << this->price << std::endl;
  };
};
#endif