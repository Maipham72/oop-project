#include <iostream>

#include "Cart.h"
#include "MenuItem.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
 private:
  int orderID;
  Cart* customerCart;

 public:
  // Default constructor
  Customer() : orderID(0) { customerCart = new Cart(); }

  // A constructor that takes in an orderID and assigns it to the customer
  // And creates a new cart for the customer
  Customer(int orderID) : orderID(orderID) { customerCart = new Cart(); }

  // Allows customer to view cart
  void viewCart() { this->customerCart->getCartItem(); }

  // Returns the total of the cart
  float getTotal() {
    float total = customerCart->getTotal();
    return total;
  }

  // Adds an item to the cart
  void addCart(MenuItem f) { customerCart->addItem(f); }

  // Get customer's order ID
  int getOrderID() { return this->orderID; }
};
#endif