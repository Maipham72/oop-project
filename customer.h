#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <vector>

#include "cart.h"
// aggregation
class Customer : Cart {
 private:
  int orderID;
  Cart* CustomerCart;

 public:
  Customer() {
    orderID = 1;
    count = 0;
    CustomerCart = new Cart();
  }
  
  void viewCart() { CustomerCart->getCartItems(); }
  float gettotal() {
    float x = CustomerCart->getTotal();
    return x;
  }
  void addCart(MenuItem f) { CustomerCart->addItem(f);
 };
};
#endif