#include <iostream>

#include "payment.h"
#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

class cashPayment : public Payment {
 protected:
  bool paid;
  float change;

 public:
  // Default constructor
  cashPayment() { paid = 0; }

  /*Initialises a cashPayment object with the amount to be paid and the boolean
   * paid variable set to false*/
  cashPayment(float amount) {
    this->amount = amount;
    this->paid = 0;
  }

  /*Prints out a message whenever payment is successful*/
  void ProcessCash(bool paid) {
    if (paid == 1) {
      std::cout << "Payment successful " << std::endl;
    } else {
      std::cout << "Payment not successful, insufficient balance" << std::endl;
    }
  }

  // Function to pay
  bool pay(float amount) {
    if (amount >= this->amount) {
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