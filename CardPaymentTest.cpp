#include <iostream>

#include "cardPayment.h"

class CardPaymentTest {
 public:
  void runTests() {
    testPositiveValues();
    testZeroValue();
  }

 private:
  void testPositiveValues() {
    // Test 1
    {
      float amount = 34.55;
      CardPayment *card_payment = new CardPayment(amount);
      // Paying exact amount
      // Expecting a false boolean variable as it is more than
      // available in the card
      if (card_payment->pay(amount) == 1) {
        cout << "Test 1 for card payment failed!" << endl;
      }
    }
    // Test 2
    {
      float amount = 6.3;
      CardPayment *card_payment = new CardPayment(amount);
      // Paying exact amount
      // Expecting a true boolean variable
      if (card_payment->pay(amount) == 0) {
        cout << "Test 2 for card payment failed!" << endl;
      }
    }
    // Test 3
    {
      float amount = 24.55;
      CardPayment *card_payment = new CardPayment(amount);
      // Paying less than exact amount
      // Expecting a false boolean variable
      if (card_payment->pay(24.55) == 0) {
        cout << "Test 3 for card payment failed!" << endl;
      }
    }
  }

  // Tests to test for the boundary values for card payment
  void testZeroValue() {
    // Test 4
    {
      float amount = 0;
      CardPayment *card_payment = new CardPayment(amount);
      // Paying exact amount
      // Expecting a true boolean variable
      if (card_payment->pay(amount) == 0) {
        cout << "Test 4 for card payment failed!" << endl;
      }
    }
  }
};