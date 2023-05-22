#include <iostream>

#include "Burger.h"

bool isNumValid(int data);
void clearInput() ;
Burger BurgerChoice() {
  system("clear");
  Burger burger("chicken", "plain");
  int bunType = 0;
  int meatType = 0;
  bool makingBurger = true;
  do {
    cout << "You have selected burger, what bun type do you want to choose? \n"
         << "[1] Plain    [2] Potato" << endl;
    cin >> bunType;

    cout << endl;

    cout << "What meat do you want? \n"
         << "[1] Chicken  [2] Beef" << endl;
    cin >> meatType;

    if (!(std::cin)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      clearInput();
      continue;
    }

    if (!isNumValid(bunType)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingBurger = true;
    }

    if (!isNumValid(meatType)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingBurger = true;
    }

    while (makingBurger != false) {
      if (bunType == 1 && meatType == 1) {
        burger.setBunType("plain");
        burger.setMeatType("chicken");
        burger.print();
        return burger;
      } else if (bunType == 1 && meatType == 2) {
        burger.setBunType("plain");
        burger.setMeatType("beef");
        burger.print();
        return burger;
      } else if (bunType == 2 && meatType == 1) {
        burger.setBunType("potato");
        burger.setMeatType("chicken");
        burger.print();
        return burger;
      } else if (bunType == 2 && meatType == 2) {
        burger.setBunType("potato");
        burger.setMeatType("beef");
        burger.print();
        return burger;
      }
    }
  } while (true);
  std::cin.get();
  return burger;
}
