
#include <iostream>
#include <limits>
#include <string>

bool isNumValid(int data) { return ((data >= 1) && (data <= 4)); }
void clearInput() {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

