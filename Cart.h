#include <iostream>
#include <string>
#include <vector>

#include "MenuItem.h"
#ifndef CART_H
#define CART_H

class Cart{
 protected:
  float total;
  std::vector<MenuItem> item_list;
  int count = 0;

  public:
 //Default constructor
  Cart() { total = 0; }

//Prints out the items in the cart
  void getCartItem() {
    for (int i = 0; i < item_list.size(); i++) {
      std::cout << item_list[i].getName() << " " << item_list[i].getPrice() << std::endl;
    }
  }

  // Add an item to the cart
  void addItem(MenuItem a) {
    item_list.push_back(a);
    total += item_list[count].getPrice();
    count++;
  }

  // Return the total of the cart
  float getTotal() { return total; }


  // Deallocate memory
  ~Cart() { this->item_list.clear(); }
};

#endif