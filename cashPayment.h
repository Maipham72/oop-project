#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include <iostream>

#include "payment.h"

class cashPayment : public Payment {
 protected:
  bool paid;

 public:
  cashPayment() { paid = 0; }
  cashPayment(float amount) {
    this->amount = amount;
    this->paid = 0;
  }
  
  bool pay(float amount) {
    std::cout << this->amount;
    if (amount == this->amount) {
      paid = 1;
      return 1;
    } else {
      paid = 0;
      return 0;
    }
    return 1;
  }
};
#endif