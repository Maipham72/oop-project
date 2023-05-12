#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include "customer.h"
#include "payment.h"
class cashPayment : public Payment {
 protected:
  bool paid;

 public:
  cashPayment() { paid = 0; }
  cashPayment(float amount) { this->amount = amount; }
  bool pay(float amount) {
    cout << this->amount;
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