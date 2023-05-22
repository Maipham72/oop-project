// The program programs a food online ordering system to implement in kiosk at
// food store
#include <chrono>
#include <iostream>
#include <limits>
#include <string>
#include <thread>
#include "BubbleTea.h"
#include "Burger.h"
#include "Cart.h"
#include "Coffee.h"
#include "Customer.h"
#include "Menu.cpp"
#include "Pizza.h"
#include "Store.h"
#include "cardPayment.h"
#include "cashPayment.h"
#include "printArt.cpp"

using namespace std;
bool isNumValid(int data);
void clearInput() ;
BubbleTea BubbleTeaChoice();
Burger BurgerChoice();
Pizza PizzaChoice();
Coffee coffeeChoice();

int main(void) {
  system("clear");

  std::string name;
  Customer *cust1 = new Customer();

  // asking for customer's name
  cout << "What is your name? " << endl;
  cin >> name;
  system("clear");

  // Welcome sign
  cout << "Welcome " << name << " to MJ Diner! \n" << endl;
  string fileName = "mj.txt";
  printArt(fileName);

  cout << endl;
  // setting variables
  bool showMenu = true;
  int menu;

  // exception handling for string, negative and out of bound inputs
  while (showMenu != false) {
    do {
      cout << "Type [1] to see the menu: " << endl;
      cin >> menu;
      if (!(std::cin)) {
        cout << "Invalid. Try again" << endl;
        clearInput();
        continue;
      }
      if (!isNumValid(menu)) {
        cout << "Invalid. Try again" << endl;
        continue;
      }
      if (menu == 1) {
        showMenu = false;
        system("clear");
        printMenu();
        break;
      }
    } while (true);
    std::cin.get();
  }

  // setting the variables
  bool reOrder = true;
  bool choosing = true;
  int typeOfPayment = 0;
  int ordering = 0;
  int choice = 0;
  bool order = true;

  // starting the order process
  // exception handling for string, negative and out of bound inputs
  while (order != false) {
    do {
      cout << "What do you want to order?" << endl;
      cin >> choice;
      if (!(std::cin)) {
        cout << "Invalid. Try again" << endl;
        clearInput();
        continue;
      }
      if (!isNumValid(choice)) {
        cout << "Invalid. Try again" << endl;
        continue;
      }

      // chossing options for customers
      while (choosing != false) {
        cout << "We don't have that in the menu. Try again!" << endl;
        if (choice == 1) {               // pizza
          Pizza pizzas = PizzaChoice();  // calling the class PizzaChoice to run
          cust1->addCart(pizzas);        // add item to cart
          cout << endl;

          // stop for 2 seconds before prompting out the next sentence for user
          // to read
          std::chrono::seconds dura(2);
          std::this_thread::sleep_for(dura);
          system("clear");

          // user can add multiple items to the cart
          // exception handling for string, negative and out of bound inputs
          while (reOrder != false) {
            do {
              cout << "Do you want to continue ordering? \n"
                   << "[1] Yes    [2] No" << endl;
              cin >> ordering;

              if (!(std::cin)) {
                cout << "Invalid. Try again" << endl;
                clearInput();
                continue;
              }

              if (!isNumValid(ordering)) {
                cout << "Invalid. Try again" << endl;
                continue;
              }

              if (ordering == 1) {
                system("clear");
                printMenu();
                order = true;
                reOrder = true;
                break;
              }

              if (ordering == 2) {
                order = false;
                reOrder = false;
                system("clear");
                goto finish;
              }
            } while (true);
            std::cin.get();
            break;
          }
          break;
        }

        if (choice == 2) {  // burger
          Burger burgers =
              BurgerChoice();       // calling the class BurgerChoice to run
          cust1->addCart(burgers);  // add item to cart
          cout << endl;

          // stop for 2 seconds before prompting out the next sentence for user
          // to read
          std::chrono::seconds dura(2);
          std::this_thread::sleep_for(dura);

          system("clear");

          // user can add multiple items to the cart
          // exception handling for string, negative and out of bound inputs
          while (reOrder != false) {
            do {
              cout << "Do you want to continue ordering? \n"
                   << "[1] Yes    [2] No" << endl;
              cin >> ordering;

              if (!(std::cin)) {
                cout << "Invalid. Try again" << endl;
                clearInput();
                continue;
              }

              if (!isNumValid(ordering)) {
                cout << "Invalid. Try again" << endl;
                continue;
              }

              if (ordering == 1) {
                system("clear");
                printMenu();
                order = true;
                reOrder = true;
                break;
              }

              if (ordering == 2) {
                order = false;
                reOrder = false;
                system("clear");
                goto finish;
              }
            } while (true);
            std::cin.get();
            break;
          }
          break;
        }

        if (choice == 3) {  // bubble tea
          BubbleTea teas =
              BubbleTeaChoice();  // calling the class BubbleTeaChoice to run
          cust1->addCart(teas);   // add item to cart

          // stop for 2 seconds before prompting out the next sentence for user
          // to read
          std::chrono::seconds dura(2);
          std::this_thread::sleep_for(dura);
          system("clear");

          // user can add multiple items to the cart
          // exception handling for string, negative and out of bound inputs
          while (reOrder != false) {
            do {
              cout << "Do you want to continue ordering? \n"
                   << "[1] Yes    [2] No" << endl;
              cin >> ordering;

              if (!(std::cin)) {
                cout << "Invalid. Try again" << endl;
                clearInput();
                continue;
              }

              if (!isNumValid(ordering)) {
                cout << "Invalid. Try again" << endl;
                continue;
              }

              if (ordering == 1) {
                system("clear");
                printMenu();
                order = true;
                reOrder = true;
                break;
              }

              if (ordering == 2) {
                order = false;
                reOrder = false;
                system("clear");
                goto finish;
              }
            } while (true);
            std::cin.get();
            break;
          }
          break;
        }

        if (choice == 4) {  // coffee
          Coffee coffees =
              coffeeChoice();       // calling the class coffeeChoice to run
          cust1->addCart(coffees);  // add item to cart

          // stop for 2 seconds before prompting out the next sentence for user
          // to read
          std::chrono::seconds dura(2);
          std::this_thread::sleep_for(dura);

          system("clear");

          // user can add multiple items to the cart
          // exception handling for string, negative and out of bound inputs
          while (reOrder != false) {
            do {
              cout << "Do you want to continue ordering? \n"
                   << "[1] Yes    [2] No" << endl;
              cin >> ordering;

              if (!(std::cin)) {
                cout << "Invalid. Try again" << endl;
                clearInput();
                continue;
              }

              if (!isNumValid(ordering)) {
                cout << "Invalid. Try again" << endl;
                continue;
              }

              if (ordering == 1) {
                system("clear");
                printMenu();
                order = true;
                reOrder = true;
                break;
              }

              if (ordering == 2) {
                order = false;
                reOrder = false;
                system("clear");
                goto finish;
              }
            } while (true);
            std::cin.get();
            break;
          }
          break;
        }
      }
      // system("clear");
    } while (true);
    std::cin.get();
  }
finish:

  // proceed to payment
  while (typeOfPayment != 1 && typeOfPayment != 2) {
    // Display items in cart and total
    cust1->viewCart();
    cout << "Your total is: " << cust1->getTotal() << endl;  // get the total
    cout << endl;
    std::chrono::seconds dura(2);
    std::this_thread::sleep_for(dura);
    // payment method cash or card
    cout << "How would you like to pay? \n"
         << "Type [1] for Cash, [2] for Card " << endl;

    cin >> typeOfPayment;
    if (typeOfPayment == 1 || typeOfPayment == 2) {
      break;
    } else {
      cout << "Invalid input, please try again" << endl;
    }
  }

  if (typeOfPayment == 1) {  // cash payment
    float payment_Amount = 0;
    cashPayment cash1(cust1->getTotal());
    cout << "How much would you like to pay? " << endl;
    cin >> payment_Amount;

    // If negative amount if entered
    while (payment_Amount < 0) {
      cout << "Error, please try again" << endl;
      cin >> payment_Amount;
    }

    // calling the pay function
    cash1.pay(payment_Amount);

    // user has to know their card balance inorder to complete payment
  } else if (typeOfPayment == 2) {  // card payment
    int balance = 0;
    cout << "How much is your card balance? " << endl
         << "[1] 50 [2] 30 [3] 10" << endl;
    cin >> balance;

    cout << endl;

    // If negative amount if entered
    while (balance != 1 && balance != 2 && balance != 3) {
      cout << "Error, please try again" << endl;
      cout << "How much is your card balance? " << endl
           << "[1] 50 [2] 30 [3] 10" << endl;
      cin >> balance;
    }
    if (balance == 1) {
      balance = 50;
    } else if (balance == 2) {
      balance = 30;
    } else if (balance == 3) {
      balance = 10;
    }

    CardPayment card1(balance, cust1->getTotal());
    // calling the pay function
    card1.pay(cust1->getTotal());
  }

  return 0;
}
