#ifndef CARDPAYMENT_H
#define CARDPAYMENT_H
#include <iostream>

#include "payment.h"
class CardPayment : public Payment {
 protected:
  float cardBalance;

 public:
  CardPayment() : Payment() { cardBalance = 0; }
  CardPayment(float balance, float amount) {
    this->cardBalance = balance;
    this->amount = amount;
  }

  void ProcessCard(bool paid) {
    if (paid = 1) {
      std::cout << "Payment sucessful " << std::endl;
    } else {
      std::cout << "Payment not sucessful, insufficient balance" << std::endl;
    }
  }

  bool pay(float amount) {
    if (amount == cardBalance) {
      ProcessCard(1);
      return 1;
    } else {
      ProcessCard(0);
      return 0;
    }
  }
};
#endif