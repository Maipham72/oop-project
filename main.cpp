#include <iostream>
#include <string>

#include "BubbleTeaChoice.cpp"
#include "Cart.h"
#include "Customer.h"
#include "Menu.cpp"
#include "Pizza.h"
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
    cout << "You have selected pizza. Do you want to add any topping with it? "
            "Press [1] for YES, [2] for NO"
         << endl;
    int topping;
    cin >> topping;
    if (topping == 1) {
      cout << "What topping do you want?\n"
           << "[1] Pineapple "
           << " "
           << "[2] Pepperoni" << endl;
      int topping_choice;
      cin >> topping_choice;

      if (topping_choice == 1) {
        cout << "You have selected pineapple pizza" << endl;
        Pizza pizza("pineapple");
        cust1->addCart(pizza);

      } else if (topping_choice == 2) {
        cout << "You have selected pepperoni pizza" << endl;
        Pizza pizza("pepperoni");
        cust1->addCart(pizza);

      } else {
        cout << "Invalid" << endl;
      }
    } else if (topping == 0) {
      cout << "You have choose no topping" << endl;
    } else if (topping != 0 || topping != 1) {
      cout << "Invalid answer, please try again" << endl;
    }
  }

  if (choice == 2) {
    cout << "You have selected burger" << endl;
  }

  if (choice == 3) {
    BubbleTea b = BubbleTeaChoice();
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