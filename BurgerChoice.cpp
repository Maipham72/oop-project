#include "Burger.h"
#include <iostream>

Burger BurgerChoice() {
  Burger burger("chicken","plain");
  cout << "You have selected burger, what bun type do you want to choose? \n" <<
          "[1] Plain    [2] Potato" << endl;
  
  int bunType = 0;
  cin >> bunType;

  cout << "What meat do you want? \n" <<
          "[1] Chicken  [2] Beef" << endl;

  int meatType = 0;
  cin >> meatType;

  system("clear");

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