#include <iostream>

#include "payment.h"
#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

class cashPayment : public Payment {
 private:
  bool paid;
  float change;
  /*Prints out a message whenever payment is successful*/
  void ProcessCash(bool paid) {
    if (paid == 1) {
      std::cout << "Payment successful, change of " << this->change
                << " will be given" << std::endl;
    } else {
      std::cout << "Payment not successful, insufficient balance" << std::endl;
    }
  }

 public:
  // Default constructor
  cashPayment() { paid = 0; }

  /*Initialises a cashPayment object with the amount to be paid and the boolean
   * paid variable set to false*/
  cashPayment(float amount) {
    this->amount = amount;
    this->paid = 0;
  }

  // Function to pay
  bool pay(float payment_amount) {
    if (payment_amount >= this->amount) {
      this->change = payment_amount - this->amount;
      this->paid = 1;
      ProcessCash(true);
      return 1;
    } else {
      this->paid = 0;
      ProcessCash(false);
      return 0;
    }
    return 1;
  }
};
#endif