#include <iostream>

#include "Pizza.h"
bool isNumValid(int data);
void clearInput() ;
Pizza PizzaChoice() {
  system("clear");
  Pizza pizza("Pepperoni");
  int topping_choice;
  bool topping = 0;
  do {
    cout << "You have selected a pizza. What topping do you want?\n"
         << "[1] Pineapple "
         << " "
         << "[2] Pepperoni" << endl;
    cin >> topping_choice;

    if (!(std::cin)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      clearInput();
      continue;
    }
    if (!isNumValid(topping_choice)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    }

    while (topping != false) {
      if (topping_choice == 1) {
        pizza.setTopping("Pineapple");
        pizza.print();
        return pizza;
      } else if (topping_choice == 2) {
        pizza.setTopping("Pepperoni");
        pizza.print();
        return pizza;
      }
    }
  } while (true);
  std::cin.get();
  return pizza;
}