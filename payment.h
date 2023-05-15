#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
 protected:
  float amount;

 public:
  Payment() {
    amount = 0;
  }

  float get_amount() { return amount; }

  // pure virtual function
  virtual bool pay(float amount) = 0;
};
#endif