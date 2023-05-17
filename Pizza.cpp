#include "Pizza.h"

#include <iostream>
Pizza* PizzaChoice() {
  Pizza *pizza = new Pizza();
  cout
      << "You have selected pizza. Do you want to add any topping with it? "
         "Press [1] for YES, [2] for NO"
      << endl;
  int topping = 0;
  cin >> topping;

  if (topping == 1) {
    cout << "What topping do you want?\n"
              << "[1] Pineapple "
              << " "
              << "[2] Pepperoni" << endl;
    int topping_choice = 0;
    cin >> topping_choice;

    if (topping_choice == 1) {
      cout << "You have selected pineapple pizza" << endl;
      pizza->setTopping("Pineapple");
      return pizza;
    } else if (topping_choice == 2) {
      cout << "You have selected pepperoni pizza" << endl;
      pizza->setTopping("Pepperoni");
      return pizza;
    } else {
      cout << "Invalid" << endl;
    }
  } else if (topping == 0) {
    cout << "You have choose no topping" << endl;
    return pizza;
  } else if (topping != 0 || topping != 1) {
    cout << "Invalid answer, please try again" << endl;
  }
  return pizza;
}