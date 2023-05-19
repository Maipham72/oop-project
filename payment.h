
#ifndef PAYMENT_H
#define PAYMENT_H
#include "Customer.h"

//Abstract class
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
  float get_amount() { return this->amount; }

  // pure virtual function to be overridded
  virtual bool pay(float payment_amount) = 0;
};
#endif