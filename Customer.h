#include <iostream>
#include <string>
#include "Cart.h"
#include "MenuItem.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
 private:
  Cart* customerCart;

 public:
  // Default constructor
  Customer() { customerCart = new Cart(); }

  // Allows customer to view cart
  void viewCart() { this->customerCart->getCartItem(); }

  // Returns the total of the cart
  float getTotal() {
    float total = customerCart->getTotal();
    return total;
  }

  // Adds an item to the cart
  void addCart(MenuItem f) { customerCart->addItem(f); }

  // Destructor
  ~Customer() { delete[] customerCart; }
};
#endif