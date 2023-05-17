#include "PaymentTest.cpp"
#include "DrinksTest.cpp"
#include "CartTest.cpp"
int main() {
  PaymentTest paymentTest;
  paymentTest.runTests();

  DrinksTest drinkTest;
  drinkTest.runDrinksTest();
  
  CartTest cartTest;
  cartTest.runCartTest();
}