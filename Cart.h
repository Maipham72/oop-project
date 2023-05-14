#include <iostream>
#include <string>
#include <vector>
#ifndef CART_H
#define CART_H


class Cart {
  protected:
    float total;
    std::vector <MenuItem> item_list;
    int count = 0;

  public:
    Cart() {
      total = 0;
    }

    void getCartItem() {
      for (int i = 0; i < item_list.size(); i++) {
        item_list[i].print();
      }
    }

    void getCartCount() {
      item_list.size();
    }

    void addItem(MenuItem a) {
      item_list.push_back(a);
      total += item_list[count].getPrice();
      count++;
    }

    float getTotal() {
      return total;
    }

    int getCount() {
      return count;
    }
};

#endif