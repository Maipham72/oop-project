#include <iostream>

#include "payment.h"
#ifndef CARDPAYMENT_H
#define CARDPAYMENT_H

/*This header file contains the CardPayment class.
This class represents when the user chooses the card payment option.*/
class CardPayment : public Payment {
 private:
  float cardBalance; // the balance of the card
  // Prints out a message if payment is sucessful or not
  void ProcessCard(bool paid) {
    if (paid == 1) {
      std::cout << "Payment sucessful " << std::endl;
      // Reduce card balance by the payment total
      this->cardBalance -= get_amount();
      std::cout << "Your balance is " << this->cardBalance << std::endl;
      std::cout
          << "Please collect the balance from the counter by exchanging card "
          << std::endl;
    } else {
      std::cout << "Payment not sucessful, insufficient balance" << std::endl;
    }
  }

 public:
  // Default constructor
  CardPayment() : Payment() { cardBalance = 30; }
  /*Initialises a card payment object with a balance and the amount of the
   * payment*/
  CardPayment(float balance, float amount) {
    this->cardBalance = balance;
    this->amount = amount;
  }

  // Function for the customer to pay
  bool pay(float payment_amount) {
    bool paid = 0;
    // If customer's card has enough balance
    if (this->cardBalance >= payment_amount) {
      ProcessCard(true);
      paid = 1;
    } else {
      ProcessCard(false);
      paid = 0;
    }
    return paid;
  }
};

#endif