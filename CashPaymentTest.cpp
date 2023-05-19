#include <iostream>

#include "cashPayment.h"

/*This is a unit test to test the functions in the CashPayment and CardPayment
 * classes*/
class CashPaymentTest {
 public:
  void runTests() {
    testCashPayment();
  }

 private:
  void testCashPayment() {
    // Test 1
    {
      float amount = 90;
      cashPayment *cash_payment = new cashPayment(amount);
      // Correct amount will be paid
      // Expecting the returned boolean variable to be 1
      if (cash_payment->pay(amount) != 1) {
        cout << "Test 1 for cash payment failed!" << endl;
      }
    }
    // Test 2
    {
      float amount = 50.5;
      cashPayment *cash_payment = new cashPayment(amount);
      // Correct amount will be paid
      // Expecting the returned boolean variable to be 1
      if (cash_payment->pay(amount) != 1) {
        cout << "Test 2 for cash payment failed!" << endl;
      }
    }
    // Test 3
    {
      float amount = 9.05;
      cashPayment *cash_payment = new cashPayment(amount);
      // Incorrect amount will be paid
      // Expecting the returned boolean variable to be 0
      if (cash_payment->pay(amount - 3) == 1) {
        cout << "Test 3 for cash payment failed!" << endl;
      }
    }
  }

 
};

