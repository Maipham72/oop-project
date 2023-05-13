#ifndef PAYMENT_H
#define PAYMENT_H
#include "customer.h"
class Payment {
 protected:
  float amount;
  int orderID;

 public:
  Payment() {
    amount = 0;
    orderID = 0;
  }
  float get_amount() { return amount; }
  // pure virtual function
  virtual bool pay(float amount) = 0;
};
#endif