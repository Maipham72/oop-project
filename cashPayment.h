#include <iostream>

#include "payment.h"
#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

class cashPayment : public Payment {
 protected:
  bool paid;

 public:
  // Default constructor
  cashPayment() { paid = 0; }

  /*Initialises a cashPayment object with the amount to be paid and the boolean
   * paid variable set to false*/
  cashPayment(float amount) {
    this->amount = amount;
    this->paid = 0;
  }

//Function to pay 
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