#include <iostream>
using namespace std;
#include "MenuItem.h"
#include "bubbleTea.h"
#include "cart.h"
#include "cashPayment.h"
#include "customer.h"
int main() {
  // starting up
  Customer *c = new Customer();

  cout << "Welcome to Pam's Diner, here is the menu " << endl;
  cout << " [1] Pizza [2] BubbleTea [3] Coffee " << endl;
  int choice;
  cout << "What would you like? " << endl;
  cin >> choice;

  if (choice == 1) {
    cout << "You have selected Pizza" << endl;
    cout << "What toppings would you like?" << endl;
    cout << "[1] Margherita [2] Pepperoni" << endl;
    cin >> choice;
  } else if (choice == 2) {
    cout << "You have selected BubbleTea" << endl;
    cout << "What tea would you like?" << endl;
    cout << "[1] Black [2] Green" << endl;
    cin >> choice;
    BubbleTea t;
    if (choice == 2) {
      cout << "Any other requests? " << endl;
      cout << "[1] None [2] 50% Ice [3] 50% Sugar [4] 50% Ice and 50% Sugar"
           << endl;
      cin >> choice;
      switch (choice) {
        case 1:
          break;
        case 2:
          t.setIceLevel();
          break;
        case 3:
          t.setSugarLevel();
          break;
        case 4:
          t.setSugarLevel();
          t.setIceLevel();
          break;
      }
      t.setTypeOfTea("Green");
      c->addCart(t);
    }
  }
  bool paid = 0;
  cashPayment *payingInCash = new cashPayment(c->gettotal());
  cout << "Would you like to proceed to payment?" << endl;
  cin >> choice;
  if (choice == 1) {
    float amount = 0;
    cout << "How much would you like to pay?" << endl;
    cin >> amount;

    paid = payingInCash->pay(amount);
  }
  if (paid != 1) {
    cout << "Sorry, payment failed. Order will be cancelled" << endl;
    return 0;
  } else {
  }
}