#include "MenuItemTest.cpp"
#include "CartTest.cpp"
#include "cardPaymentTest.cpp"
#include "cashPaymentTest.cpp"
#include "DrinksTest.cpp"

int main() {
  CashPaymentTest cashPaymentTest;
  cashPaymentTest.runTests();

  CardPaymentTest cardPaymentTest;
  cardPaymentTest.runTests();
  
  DrinksTest drinkTest;
  drinkTest.runDrinksTest();

  MenuItemTest menuItemTest;
  menuItemTest.runMenuItemTest();

  CartTest cartTest;
  cartTest.runCartTest();

}