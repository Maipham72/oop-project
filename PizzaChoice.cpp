#include <iostream>
#include "Pizza.h"

Pizza PizzaChoice() {
  Pizza pizza("Pepperoni");
  cout << "What topping do you want?\n"
       << "[1] Pineapple "
       << " "
       << "[2] Pepperoni" << endl;
  int topping_choice = 0;

  while (topping_choice != 1 || topping_choice != 2) {
    cin >> topping_choice;
    if (topping_choice == 1) {
      pizza.setTopping("Pineapple");
      pizza.print();
      return pizza;
    } else if (topping_choice == 2) {
      pizza.setTopping("Pepperoni");
      pizza.print();
      return pizza;
    } else {
      cout << "Invalid, please try again" << endl;
    }
  }
  return pizza;
}