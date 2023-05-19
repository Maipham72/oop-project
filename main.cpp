#include <iostream>
#include <string>

#include "BubbleTeaChoice.cpp"
#include "Cart.h"
#include "Coffee.h"
#include "Customer.h"
#include "Menu.cpp"
#include "Pizza.h"
#include "PizzaChoice.cpp"
#include "cardPayment.h"
#include "cashPayment.h"
#include "printArt.cpp"
using namespace std;

int main() {
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

  if (choice == 1) {
    Pizza pizza = PizzaChoice();
  }

  if (choice == 2) {
    cout << "You have selected burger" << endl;
  }

  if (choice == 3) {
    BubbleTea b = BubbleTeaChoice();
  }

  if (choice == 4) {
    Coffee c;
  }
  bool paid = 0;
  cout << "Would you like to proceed to payment? \n"
       << "Type [1] for Yes, [2] for No \n"
       << endl;

  int payment_now = 0;
  cin >> payment_now;

  CardPayment c(cust1->getTotal());
  if (payment_now == 1) {
    c.ProcessCard(1);
  }

  cashPayment c1(cust1->getTotal());
  cout << "How much would you like to pay?" << endl;
  float amountPaid;
  cin >> amountPaid;
  if (amountPaid == cust1->getTotal()) {
    c1.ProcessCash(1);
  } else {
    c1.ProcessCash(0);
  }

  return 0;
}