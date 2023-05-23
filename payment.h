
#ifndef PAYMENT_H
#define PAYMENT_H
#include "Customer.h"

//Abstract class for payment method
class Payment {
 protected:
  float amount;

 public:
 //Default constructor
  Payment() {
    amount = 0;
  }

  //Returns the payment amount
  float get_amount() { return this->amount; }

  // pure virtual function to be overridded
  virtual bool pay(float payment_amount) = 0;
};
#endif