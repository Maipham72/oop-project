#include <iostream>
#include "Coffee.h"

// enum Shot {
//   decaf = 0,
//   single = 1,
//   doubleshot = 2
// };

Coffee coffeeChoice() {
  Coffee coffee(0);

  cout << "You have selected coffee. How many shots do you want?"
       << "[0] decaf    [1] single     [2] double" << endl;
  int shots;
  cin >> shots;

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
  return coffee;
}
