#include <iostream>
#include <string>

#include "BubbleTeaChoice.cpp"
#include "BurgerChoice.cpp"
#include "Cart.h"
#include "Coffee.h"
#include "CoffeeChoice.cpp"
#include "Customer.h"
#include "Menu.cpp"
#include "Pizza.h"
#include "PizzaChoice.cpp"
#include "cardPayment.h"
#include "cashPayment.h"
#include "Store.h"
#include "printArt.cpp"

using namespace std;

int main(void) {
  string fileName = "mj.txt";
  printArt(fileName);

  Customer *cust1 = new Customer();

  cout << "Welcome to MJ Diner! \n"
       << "Type [1] to see the menu: " << endl;
  int menu;
  cin >> menu;
  cout << endl;

  if (menu == 1) {
    printMenu();
  }

  int choice;
  std::cout << "What do you want to order? " << endl;
  cin >> choice;

  int ordering; 

  while (choice != 1 || choice != 2 || choice != 3 || choice != 4) {
    if (choice == 1) {
      Pizza pizzas = PizzaChoice();
      cust1->addCart(pizzas);
      cout << "Do you want to continue odering? \n" <<
              "[1] Yes    [2] No" << endl;
      cin >> ordering;
      if (ordering == 1)

    }

    if (choice == 2) {
      Burger burgers = BurgerChoice();
      cust1->addCart(burgers);
      break;
    }

    if (choice == 3) {
      BubbleTea teas = BubbleTeaChoice();
      cust1->addCart(teas);
      break;
    }

    if (choice == 4) {
      Coffee coffees = coffeeChoice();
      cust1->addCart(coffees);
      break;
    }
  }

  bool paid = 0;
  cout << "Would you like to proceed to payment? \n"
       << "Type [1] for Yes, [2] for No" << endl;
      

  int payment_now = 0;
  cin >> payment_now;

  system("clear");

  int typeOfPayment = 0;
  if (payment_now == 1) {
    cust1->viewCart();
    cout << "Your total is: " << cust1->getTotal() << endl;
    cout << "How would you like to pay? \n"
         << "Type [1] for Cash, [2] for Card " << endl;

    cin >> typeOfPayment;
  }
  float payment_Amount = 0;
  cashPayment c1(cust1->getTotal());
  if (typeOfPayment == 1) {
    bool done = 0;
    cout << "How much would you like to pay? " << endl;

    cin >> payment_Amount;

    // If negative amount if entered
    while (payment_Amount < 0) {
      cout << "Error, please try again" << endl;
      cin >> payment_Amount;
    }
  }
  
  

  c1.pay(payment_Amount);

  return 0;
}