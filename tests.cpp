
#include "CardPaymentTest.cpp"
#include "CashPaymentTest.cpp"
#include "DrinksTest.cpp"

int main() {
  CashPaymentTest cashPaymentTest;
  cashPaymentTest.runTests();

  CardPaymentTest cardPaymentTest;
  cardPaymentTest.runTests();
  
  DrinksTest drinkTest;
  drinkTest.runDrinksTest();

}