#include <iostream>
#include <string>

#include "BubbleTea.h"
#include "BubbleTeaChoice.cpp"
#include "Burger.h"
#include "BurgerChoice.cpp"
#include "Cart.h"
#include "Coffee.h"
#include "CoffeeChoice.cpp"
#include "Customer.h"
#include "Menu.cpp"
#include "Pizza.h"
#include "PizzaChoice.cpp"
#include "Store.h"
#include "cardPayment.h"
#include "cashPayment.h"
#include "printArt.cpp"

using namespace std;

BubbleTea BubbleTeaChoice();
Burger BurgerChoice();
Pizza PizzaChoice();
Coffee coffeeChoice();

int main(void) {
  system("clear");

  cout << endl;
  std::string name;
  Customer *cust1 = new Customer();

  cout << "What is your name? " << endl;
  cin >> name;
  cout << "Welcome " << name << " to MJ Diner! \n" << endl;
  string fileName = "mj.txt";
  printArt(fileName);

  cout << endl;

  cout << "Type [1] to see the menu: " << endl;
  int menu;
  cin >> menu;
  cout << endl;
  system("clear");

  if (menu == 1) {
    printMenu();
  }

  bool payment = true;
  int typeOfPayment = 0;
  int ordering = 0;
  int choice = 0;
  bool order = true;
  while (order != false || payment != true) {
    std::cout << "What do you want to order? " << endl;
    cin >> choice;

    while (choice != 1 || choice != 2 || choice != 3 || choice != 4) {
      if (choice == 1) {
        Pizza pizzas = PizzaChoice();
        cust1->addCart(pizzas);
        cout << endl;
        cout << "Do you want to continue ordering? \n"
             << "[1] Yes    [2] No" << endl;
        cin >> ordering;
        system("clear");
        if (ordering == 1) {
          printMenu();
          order = true;
          break;
        } else {
          order = false;
          payment = true;

          break;
        }
      }

      if (choice == 2) {
        Burger burgers = BurgerChoice();
        cust1->addCart(burgers);
        cout << endl;
        cout << "Do you want to continue ordering? \n"
             << "[1] Yes    [2] No" << endl;
        cin >> ordering;
        system("clear");
        if (ordering == 1) {
          printMenu();
          order = true;
          break;
        } else {
          order = false;
          payment = true;

          break;
        }
      }

      if (choice == 3) {
        BubbleTea teas = BubbleTeaChoice();
        cust1->addCart(teas);
        cout << "Do you want to continue ordering? \n"
             << "[1] Yes    [2] No" << endl;
        cin >> ordering;
        system("clear");
        if (ordering == 1) {
          printMenu();
          order = true;
          break;
        } else {
          order = false;
          payment = true;
          break;
        }
      }

      if (choice == 4) {
        Coffee coffees = coffeeChoice();
        cust1->addCart(coffees);
        cout << "Do you want to continue ordering? \n"
             << "[1] Yes    [2] No" << endl;
        cin >> ordering;
        system("clear");
        if (ordering == 1) {
          printMenu();
          order = true;
          break;
        } else if (ordering == 2) {
          order = false;
          payment = true;
          break;
        }
      }
    }
  }
  system("clear");

  while (typeOfPayment != 1 && typeOfPayment != 2) {
    // Display items in cart and total
    cust1->viewCart();
    cout << "Your total is: " << cust1->getTotal() << endl;
    cout << "How would you like to pay? \n"
         << "Type [1] for Cash, [2] for Card " << endl;

    cin >> typeOfPayment;
    if (typeOfPayment == 1 || typeOfPayment == 2) {
      break;
    } else {
      cout << "Invalid input, please try again" << endl;
    }
  }

  if (typeOfPayment == 1) {
    float payment_Amount = 0;
    cashPayment cash1(cust1->getTotal());
    cust1->viewCart();
    cout << "Your total is: " << cust1->getTotal() << endl;
    cout << "How much would you like to pay? " << endl;

    cin >> payment_Amount;

    // If negative amount if entered
    while (payment_Amount < 0) {
      cout << "Error, please try again" << endl;
      cin >> payment_Amount;
    }

    cash1.pay(payment_Amount);

  } else if (typeOfPayment == 2) {
    int balance = 0;
    cout << "How much is your card balance? " << endl
         << "[1] 50 [2] 30 [3] 10" << endl;
    cin >> balance;

    // If negative amount if entered
    while (balance != 1 && balance != 2 && balance != 3) {
      cout << "Error, please try again" << endl;
      cout << "How much is your card balance? " << endl
           << "[1] 50 [2] 30 [3] 10" << endl;
      cin >> balance;
    }
    if (balance == 1)
      balance = 50;
    else if (balance == 2)
      balance = 30;
    else if (balance == 3)
      balance = 10;
    CardPayment card1(balance, cust1->getTotal());
    card1.pay(cust1->getTotal());
  }

  return 0;
}
