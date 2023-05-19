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

  if (bunType == 1 && meatType == 1) {
    cout << "You have made a plain chicken burger. Happy eating!" << endl;
    burger.setBunType("plain");
    burger.setMeatType("chicken");
    return burger;
  } else if (bunType == 1 && meatType == 2) {
    cout << "You have made a plain beef burger. Happy eating!" << endl;
    burger.setBunType("plain");
    burger.setMeatType("beef");
    return burger;
  } else if (bunType == 2 && meatType == 1) {
    cout << "You have made a potato chicken burger. Happy eating!" << endl;
    burger.setBunType("potato");
    burger.setMeatType("chicken");
    return burger;
  } else if (bunType == 2 && meatType == 2) {
    cout << "You have made a potato beef burger. Happy eating!" << endl;
    burger.setBunType("potato");
    burger.setMeatType("beef");
    return burger;
  } else {
    cout << "Invalid. Make another burger" << endl;
  }
  return burger;




}