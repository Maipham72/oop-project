#include <iostream>
#include <string>
#include <vector>

#include "MenuItem.h"
#ifndef CART_H
#define CART_H

// this class represents a cart
class Cart{
 protected:
  float total;  //the total price of the cart
  std::vector<MenuItem> item_list; //item list in the cart
  int count = 0; //number of items in the cart

  public:
 //Default constructor
  Cart() { total = 0; }

//Prints out the items in the cart
  void getCartItem() {
    for (long unsigned int i = 0; i < item_list.size(); i++) {
      cout << item_list[i].getName() << " " << item_list[i].getPrice() << endl;
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