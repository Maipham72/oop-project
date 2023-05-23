#include <iostream>

#include "cardPayment.h"

class CardPaymentTest {
 public:
  void runTests() {
    testSuccessfulPayment();
    testFailedPayment();
    testZeroValue();
  }

 private:
  void testSuccessfulPayment() {
    // Test 1
    {
      float amount = 11.55;
      float balance = 30.00;
      CardPayment *card_payment = new CardPayment(balance, amount);
      // Paying exact amount and enough balance
      // Expecting a true boolean variable
      if (card_payment->pay(amount) == 0) {
        cout << "Test 1 for card payment failed!" << endl;
      }
    }
    // Test 2
    {
      float amount = 6.3;
      float balance = 10.00;
      CardPayment *card_payment = new CardPayment(balance, amount);
      // Paying exact amount and card has enough balance
      // Expecting a true boolean variable
      if (card_payment->pay(amount) == 0) {
        cout << "Test 2 for card payment failed!" << endl;
      }
    }
    // Test 3
    {
      float amount = 9;
      float balance = 9;
      CardPayment *card_payment = new CardPayment(balance, amount);
      // Paying exact amount, just enough balance
      // Expecting a true boolean variable
      if (card_payment->pay(amount) == 0) {
        cout << "Test 3 for card payment failed!" << endl;
      }
    }
  }
  void testFailedPayment() {
    // Test 4
    {
      float amount = 24.55;
      float balance = 0.05;
      CardPayment *card_payment = new CardPayment(balance, amount);
      // Card does not enough have balance
      // Expecting a false boolean variable
      if (card_payment->pay(24.55) == 1) {
        cout << "Test 4 for card payment failed!" << endl;
      }
    }
    // Test 5
    {
      float amount = 34.55;
      float balance = 34.54;
      CardPayment *card_payment = new CardPayment(balance, amount);
      // Card does not have enough balance
      // Expecting a false boolean variable +
      if (card_payment->pay(amount) == 1) {
        cout << "Test 5 for card payment failed!" << endl;
      }
    }
    // Test 6
    {
      float amount = 3;
      float balance = 2;
      CardPayment *card_payment = new CardPayment(balance, amount);
      // Card does not have enough balance
      // Expecting a false boolean variable
      if (card_payment->pay(amount) == 1) {
        cout << "Test 6 for card payment failed!" << endl;
      }
    }
  }

  // Tests to test for the boundary values for card payment
  void testZeroValue() {
    // Test 7
    {
      float amount = 0;
      float balance = 0;
      CardPayment *card_payment = new CardPayment(balance, amount);
      // Paying exact amount
      // Expecting a true boolean variable
      if (card_payment->pay(amount) == 0) {
        cout << "Test 7 for card payment failed!" << endl;
      }
    }
  }
};