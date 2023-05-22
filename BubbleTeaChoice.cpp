#include <iostream>

#include "BubbleTea.h"
bool isNumValid(int data);
void clearInput();
BubbleTea BubbleTeaChoice() {
  system("clear");
  // Bubble Tea initialised to Black Tea by default
  BubbleTea bubbleTea("Black");
  bool makingTea = true;
  int tea = 0;
  int sugarLevel = 0;
  int iceLevel = 0;

  do {
    cout << "You have selected Bubble Tea. What kind of tea do you want with "
            "it? \n"
            "Press [1] for Black, [2] for Green"
         << endl;
    cin >> tea;
    cout << endl;

    if (!isNumValid(tea)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingTea = true;
    }

    cout << "What is your preferred sugar level \n"
            "Press [1] 100, [2] 50 [3] 25"
         << endl;
    cin >> sugarLevel;

    if (!isNumValid(sugarLevel)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingTea = true;
    }
    cout << endl;
    cout << "What is your preferred ice level \n"
         << "Press [1] 100, [2] 50 [3] 25" << endl;
    cin >> iceLevel;

    if (!(std::cin)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      clearInput();
      continue;
    }

    if (!isNumValid(iceLevel)) {
      system("clear");
      cout << "Invalid. Try again" << endl;
      continue;
    } else {
      makingTea = true;
    }

    while (makingTea != false) {
      if (tea == 2) {
        bubbleTea.setTeaType("Green");
      } else if (tea == 1) {
      };

      if (sugarLevel == 1) {
        bubbleTea.setSugarLevel(100);
      } else if (sugarLevel == 2) {
        bubbleTea.setSugarLevel(50);
      } else if (sugarLevel == 3) {
        bubbleTea.setSugarLevel(25);
      }

      if (iceLevel == 1) {
        bubbleTea.setIceLevel(100);
        bubbleTea.print();
        return bubbleTea;
      } else if (iceLevel == 2) {
        bubbleTea.setIceLevel(50);
        bubbleTea.print();
        return bubbleTea;

      } else if (iceLevel == 3) {
        bubbleTea.setIceLevel(25);
        bubbleTea.print();
        return bubbleTea;
      }
    }
  } while (true);
  std::cin.get();
  return bubbleTea;
};