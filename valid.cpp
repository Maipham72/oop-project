
#include <iostream>
#include <limits>
#include <string>
bool isNumValidTwo(int data) { return ((data >= 1) && (data <= 2)); }
bool isNumValidThree(int data) { return ((data >= 1) && (data <= 3)); }
bool isNumValidFour(int data) { return ((data >= 1) && (data <= 4)); }


void clearInput() {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

