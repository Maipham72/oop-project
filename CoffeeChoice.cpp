#include <iostream>
#include "Coffee.h"

// enum Shot {
//   decaf = 0,
//   single = 1,
//   doubleshot = 2
// };

Coffee coffeeChoice() {
  system("clear");
  Coffee coffee(0);

  cout << "You have selected coffee. How many shots do you want? \n"
       << "[0] decaf    [1] single     [2] double" << endl;
  int shots;
  cin >> shots;
  while (!(shots <= 2 && shots >= 0)) {
    cout << "Invalid output entered, please try again" << endl
         << "You have selected coffee. How many shots do you want? \n"
         << "[0] decaf    [1] single     [2] double" << endl;
    cin >> shots;
  }
  if (shots == 0) {
    // Shot caffeine;
    // caffeine = decaf;
    cout << "You have chosen a decaf" << endl;
    coffee.setCaffeineLevel(0);
    return coffee;
  } else if (shots == 1) {
    cout << "You have chosen a single shot" << endl;
    coffee.setCaffeineLevel(1);
  } else if (shots == 2) {
    cout << "You have chosen a double shot" << endl;
    coffee.setCaffeineLevel(2);
  } else {
    cout << "Invalid. Make another coffee" << endl;
  }

  cout << endl;
  cout << "What is your preferred sugar level \n"
          "Press [1] 100 (with sugar), [2] 0 (no sugar)"
       << endl;
  int sugarLevel = 0;

  while (sugarLevel != 1 && sugarLevel != 2) {
    cin >> sugarLevel;
    if (sugarLevel == 2) {
      coffee.setSugarLevel(0);
      break;
    } else if (sugarLevel == 1) {
      break;
    } else {
      cout << "Error occured. Please try again \n" << endl
           << "What is your preferred sugar level \n "
              "Press [1] 100 (with sugar), [2] 0 (no sugar)"
           << endl;
    }
  }

  cout << endl;
  cout << "What is your preferred ice level \n"
          "Press [1] 100, [2] 50 [3] 25"
       << endl;
  int iceLevel = 0;
  
  while (iceLevel != 1 && iceLevel != 2 && iceLevel != 3) {
    cin >> iceLevel;
    if (iceLevel == 2) {
      coffee.setIceLevel(50);
      coffee.print();
      break;
    } else if (iceLevel == 3) {
      coffee.setIceLevel(25);
      coffee.print();
      break;
    } else if (iceLevel == 1) {
      coffee.print();
      break;
    } else {
      coffee.print();
      cout << "Error occured. Please try again \n" << endl
           << "What is your preferred ice level \n"
              "Press [1] 100, [2] 50 [3] 25"
           << endl;
    }
  }
  return coffee;
}
