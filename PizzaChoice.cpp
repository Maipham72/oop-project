#include <iostream>

#include "Pizza.h"
bool isNumValidTwo(int data);
bool isNumValidThree(int data);
void clearInput();

/*A function that will be called when the customer chooses to order a pizza*/
Pizza PizzaChoice() {
  system("clear");
  Pizza pizza("Pepperoni");
  int topping_choice = 0;
  bool makingPizza = true;

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
    // Validating input
    if (!isNumValidTwo(topping_choice)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingPizza = true;
    }

    while (makingPizza != false) {
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