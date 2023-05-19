#include <iostream>

#include "BubbleTea.h"

BubbleTea BubbleTeaChoice() {
  // Bubble Tea initialised to Black Tea by default
  BubbleTea bubbleTea("Black");
  cout << "You have selected Bubble Tea. What kind of tea do you want with it? "
          "Press [1] for Black, [2] for Green"
       << endl;
  int tea = 0;

  while (tea != 1 || tea != 2) {
    cin >> tea;
    if (tea == 2) {
      bubbleTea.setTeaType("Green");
      break;
    }
    if (tea == 1) {
      break;
    } else {
      cout << "Error occurred, please try again" << endl;
    }
  }

  cout << "What is your preferred sugar level "
          "Press [1] 100, [2] 50 [3] 25"
       << endl;
  int sugarLevel = 0;

  while (sugarLevel != 1 || sugarLevel != 2 || sugarLevel != 3) {
    cin >> sugarLevel;
    if (sugarLevel == 2) {
      bubbleTea.setSugarLevel(50);
      break;
    } else if (sugarLevel == 3) {
      bubbleTea.setSugarLevel(25);
    } else if (sugarLevel == 1) {
      break;
    } else {
      cout << "Error occured. Please try again" << endl;
    }
  }

  cout << "What is your preferred ice level "
          "Press [1] 100, [2] 50 [3] 25"
       << endl;
  int iceLevel = 0;

  while (iceLevel != 1 || iceLevel != 2 || iceLevel != 3) {
    cin >> iceLevel;
    if (iceLevel == 2) {
      bubbleTea.setIceLevel(50);
      break;
    } else if (iceLevel == 3) {
      bubbleTea.setIceLevel(25);
      break;
    } else if (iceLevel == 1) {
      break;
    } else {
      cout << "Error occured. Please try again" << endl;
    }
  }
  return bubbleTea;
};