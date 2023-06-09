#include <iostream>

#include "payment.h"
#ifndef CARDPAYMENT_H
#define CARDPAYMENT_H

/*This header file contains the CardPayment class. 
This class represents when the user chooses the card payment option.*/
class CardPayment : public Payment {
 protected:
  float cardBalance;

 public:
  // Default constructor
  CardPayment() : Payment() { cardBalance = 30; }
  /*Initialises a card payment object with a balance of 30 and the amount of the
   * payment*/
  CardPayment(float amount) {
    this->cardBalance = 30;
    this->amount = amount;
  }

//Prints out a message if payment is sucessful or not
  void ProcessCard(bool paid) {
    if (paid == 1) {
      std::cout << "Payment sucessful " << std::endl;
      //Reduce card balance by the payment total
      this->cardBalance -= get_amount();
      std::cout << "Your balance is " << this->cardBalance << std::endl;
    } else {
      std::cout << "Payment not sucessful, insufficient balance" << std::endl;
    }
  }

//Function for the customer to pay
  bool pay(float amount) {
    if (amount <= cardBalance) {
      ProcessCard(1);
      return 1;
    } else {
      ProcessCard(0);
      return 0;
    }
  }
};
#endif