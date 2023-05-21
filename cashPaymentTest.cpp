#include <iostream>

#include "cashPayment.h"

/*This is a unit test to test the functions in the CashPayment and CardPayment
 * classes*/
class CashPaymentTest {
 public:
  void runTests() {
    testAcceptedPayment();
    testFailedPayment();
    testZeroValue();
  }

 private:
  void testAcceptedPayment() {
    // Test 1
    {
      float amount = 90;
      cashPayment *cash_payment = new cashPayment(amount);
      // More than correct amount will be paid
      // Expecting the returned boolean variable to be 1
      //and a message displaying the change
      if (cash_payment->pay(amount+10) != 1) {
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
      float amount = 45.55;
      cashPayment *cash_payment = new cashPayment(amount);
      // Correct amount will be paid
      // Expecting the returned boolean variable to be 1
      if (cash_payment->pay(amount) != 1) {
        cout << "Test 3 for cash payment failed!" << endl;
      }
    }
  }
  void testFailedPayment() {
    // Test 4
    {
      float amount = 99;
      cashPayment *cash_payment = new cashPayment(amount);
      // Incorrect amount will be paid
      // Expecting the returned boolean variable to be 0
      if (cash_payment->pay(10) == 1) {
        cout << "Test 4 for cash payment failed!" << endl;
      }
    }// Test 5
    {
      float amount = 12.3;
      cashPayment *cash_payment = new cashPayment(amount);
      // Incorrect amount will be paid
      // Expecting the returned boolean variable to be 0
      if (cash_payment->pay(1) == 1) {
        cout << "Test 5 for cash payment failed!" << endl;
      }
    }
    // Test 6
    {
      float amount = 8.75;
      cashPayment *cash_payment = new cashPayment(amount);
      // Incorrect amount will be paid
      // Expecting the returned boolean variable to be 0
      if (cash_payment->pay(amount - 3) == 1) {
        cout << "Test 6 for cash payment failed!" << endl;
      }
    }
  }
  void testZeroValue() {
    //Test 7: Total amount for all items is 0
    {
      float amount = 0;
      cashPayment *cash_payment = new cashPayment(amount);
      if (cash_payment->pay(0) != 1){
        cout << "Test 7 for cash payment failed!" << endl;
      }
    }
    //Test 8: Paid amount is 0
    {
      float amount = 10;
      cashPayment *cash_payment = new cashPayment(amount);
      if (cash_payment->pay(0) == 1){
        cout << "Test 8 for cash payment failed!" << endl;
      }
    }
  }
};
