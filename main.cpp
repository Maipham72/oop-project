#include <iostream>
#include <string>

#include "printArt.cpp"
// #include "MenuItem.h"
#include "Cart.h"
#include "Customer.h"
#include "Pizza.h"

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
    cout << "This is our menu: \n"
         << "[1] Pizza (including all toppings)"
         << " "
         << "$10 \n"
         << "[2] Burger"
         << "                         "
         << "$9.5 \n"
         << "[3] Bubble Tea"
         << "                     "
         << "$7.0 \n"
         << "[4] Coffee"
         << "                         "
         << "$6.5" << endl;
  }

  int choice;
  cout << "What do you want to order? " << endl;
  cin >> choice;

  if (choice == 1) {
    cout << "You have selected pizza. Do you want to add any topping with it? "
            "Press [1] for YES, [2] for NO"
         << endl;
    int topping;
    cin >> topping;
    if (topping == 1) {
      cout << "What topping do you want?\n"
           << "[1] Margherita "
           << " "
           << "[2] Pepperoni" << endl;
      int topping_choice;
      cin >> topping_choice;
      if (topping_choice == 1) {
        cout << "You have selected margherita pizza" << endl;
        Pizza pizza("Margherita");
        pizza.print();
        cust1->addCart(pizza);
      } else if (topping_choice == 2) {
        cout << "You have selected pepperoni pizza" << endl;
        Pizza pizza("Pepperoni");
        pizza.print();
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

  cust1->viewCart();
  cout << endl;
  cust1->getTotal();

  return 0;
}