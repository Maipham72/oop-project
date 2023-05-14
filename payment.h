#ifndef PAYMENT_H
#define PAYMENT_H
#include "Customer.h"
class Payment {
 protected:
  float amount;
  int orderID;

 public:
 //Default constructor
  Payment() {
    amount = 0;
    orderID = 0;
  }

  //Returns the payment amount
  float get_amount() { return amount; }

  // pure virtual function to be overridded
  virtual bool pay(float amount) = 0;
};
#endif