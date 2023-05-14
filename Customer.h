#include <iostream>
#include "Store.h"
#include "Cart.h"
#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer : Cart {
 private:
  int orderID;
  Cart* customerCart;

 public:
  // Default constructor
  Customer() {
    orderID = 0;
    customerCart = new Cart();
  }

  Customer(int orderID) : orderID(orderID) { customerCart = new Cart(); }

  // Allows customer to view cart
  void viewCart() { customerCart->getCartItem(); }

  // Returns the total of the cart
  float getTotal() {
    float total = customerCart->getTotal();
    return total;
  }

  // Adds an item to the cart
  void addCart(MenuItem f) { customerCart->addItem(f); }
};
#endif