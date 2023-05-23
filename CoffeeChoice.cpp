#include <iostream>

#include "Coffee.h"

// enum Shot {
//   decaf = 0,
//   single = 1,
//   doubleshot = 2
// };
bool isNumValidTwo(int data);
bool isNumValidThree(int data);
void clearInput();

Coffee coffeeChoice() {
  system("clear");
  Coffee coffee(0);

  bool makingCoffee = true;
  int sugarLevel = 0;
  int iceLevel = 0;
  int shots = 0;

  do {
    cout << "You have selected coffee. How many shots do you want? \n"
         << "[1] decaf    [2] single     [3] double" << endl;
    cin >> shots;

    if (!isNumValidThree(shots)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingCoffee = true;
    }
    cout << endl;
    cout << "What is your preferred sugar level \n"
            "Press [1] 100 (with sugar), [2] 0 (no sugar)"
         << endl;
    cin >> sugarLevel;

    if (!isNumValidTwo(sugarLevel)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingCoffee = true;
    }
    
    cout << endl;
    cout << "What is your preferred ice level \n"
         << "Press [1] 100, [2] 50 [3] 25" << endl;
    cin >> iceLevel;

    if (!isNumValidThree(iceLevel)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingCoffee = true;
    }

    while (makingCoffee != false) {
      if (shots == 1) {
        coffee.setCaffeineLevel(0);
      } else if (shots == 2) {
        coffee.setCaffeineLevel(1);
      } else if (shots == 3) {
        coffee.setCaffeineLevel(2);
      }

      if (sugarLevel == 1) {
        coffee.setSugarLevel(100);
      } else if (sugarLevel == 2) {
        coffee.setSugarLevel(0);
      }

      if (iceLevel == 1) {
        coffee.setIceLevel(100);
        coffee.print();
        return coffee;

      } else if (iceLevel == 2) {
        coffee.setIceLevel(50);
        coffee.print();
        return coffee;

      } else if (iceLevel == 3) {
        coffee.print();
        coffee.setIceLevel(25);
        return coffee;
      }
    }
  } while (true);
  return coffee;
}
