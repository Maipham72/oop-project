#include <Cart.h>
#include <iostream>
#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer : Cart {
  private:
    int orderID;
    Cart* customerCart;
  
  public:
    Customer() {
      orderID  = 0;
    }

    Customer(int orderID): orderID(orderID) {
      customerCart = new Cart;
    }

    void viewCart() {
      customerCart->getCartItem();
    }

    float getTotal() {
      float total = customerCart->getTotal();
      return total;
    }

    void addCart(MenuItem f) {
      customerCart->addItem(f);
    }
};
#endif