#ifndef CART_H
#define CART_H
#include <iostream>
#include <vector>

#include "MenuItem.h"

class Cart {
 protected:
  int count;
  float price_total;
  std::vector<MenuItem> item_list;

 public:
  Cart() : count(0), price_total(0){};
  void getCartItems() {
    for (int i = 0; i < count; i++) {
      item_list[i].print();
    }
  }
  void addItem(MenuItem f) {
    item_list.push_back(f);
    price_total += item_list[count].getPrice();
    count++;
  }
  float getTotal() { return this->price_total; };
  int getCount() { return this->count; };
};
#endif