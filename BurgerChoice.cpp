#include <iostream>

#include "Burger.h"

Burger BurgerChoice() {
  Burger burger("chicken", "plain");
  cout << "You have selected burger, what bun type do you want to choose? \n"
       << "[1] Plain    [2] Potato" << endl;

  int bunType = 0;
  cin >> bunType;
  while (bunType != 1 && bunType != 2) {
    cout << "Invalid input entered, please try again" << endl
         << "You have selected burger, what bun type do you want to choose? \n"
         << "[1] Plain    [2] Potato" << endl;
    cin >> bunType;
  }

  cout << "What meat do you want? \n"
       << "[1] Chicken  [2] Beef" << endl;

  int meatType = 0;
  cin >> meatType;

  while (meatType != 1 && meatType != 2) {
    cout << "Invalid input entered, please try again" << endl
         << "What meat do you want? \n"
         << "[1] Chicken  [2] Beef" << endl;
    cin >> meatType;
  }

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
  } else {
    cout << "Invalid. Make another burger" << endl;
  }
  return burger;
}