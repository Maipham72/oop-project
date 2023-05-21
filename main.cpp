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
  bool paymentError = true;
  int typeOfPayment = 0;
  int ordering = 0;
  int choice = 0;
  bool order = true;
  while (order != false) {
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

  while (payment != false) {
    cout << "Would you like to proceed to payment? \n"
         << "Type [1] for Yes, [2] for No" << endl;
    int payment_now = 0;
    cin >> payment_now;

    system("clear");

    if (payment_now == 1) {
      // Display items in cart and total
      while (typeOfPayment != 1 && typeOfPayment != 2) {
        cust1->viewCart();
        cout << "Your total is: " << cust1->getTotal() << endl;
        cout << "How would you like to pay? \n"
             << "Type [1] for Cash, [2] for Card " << endl;

        cin >> typeOfPayment;
      }
    } else if (payment_now == 2) {
      cout << "Do you want to continue ordering? \n"
           << "[1] Yes    [2] No" << endl;
      cin >> ordering;
      system("clear");
      if (ordering == 1) {
        order = true;
        printMenu();
        payment = false;
        paymentError = 0;
        // need to run order loop again
      } else {
        order = false;
        payment = true;
        paymentError = 1;
        break;
      }
    }
  }

  if (typeOfPayment == 1 || typeOfPayment == 2) {
    paymentError = 0;
  }

  while (paymentError != 0) {
    while (typeOfPayment != 1 && typeOfPayment != 2) {
      cout << "Error, unknown input entered, please try again " << endl;
      cout << "How would you like to pay? \n"
           << "Type [1] for Cash, [2] for Card " << endl;
      cin >> typeOfPayment;
      if (typeOfPayment == 1 || typeOfPayment == 2) {
        paymentError = 1;
      }
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
    float payment_Amount = 0;
    CardPayment card1(30, cust1->getTotal());
    cout << "How much would you like to pay? " << endl;
    cin >> payment_Amount;

    // If negative amount if entered
    while (payment_Amount < 0) {
      cout << "Error, please try again" << endl;
      cin >> payment_Amount;
    }

    card1.pay(payment_Amount);
  }

  return 0;
}
