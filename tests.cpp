#include "PaymentTest.cpp"
#include "DrinksTest.cpp"
int main() {
  PaymentTest paymentTest;
  paymentTest.runTests();

  DrinksTest drinkTest;
  drinkTest.runDrinksTest();
}