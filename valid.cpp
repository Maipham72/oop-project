
#include <iostream>
#include <limits>
#include <string>

/*The functions below are used to validate the input from the user*/

//Function to validate input that should be between 1 and 2
bool isNumValidTwo(int data) { return ((data >= 1) && (data <= 2)); }

//Function to validate input that should be between 1 and 3
bool isNumValidThree(int data) { return ((data >= 1) && (data <= 3)); }

//Function to validate input that should be between 1 and 4
bool isNumValidFour(int data) { return ((data >= 1) && (data <= 4)); }

//Function to validate input payment amount entered by user
bool isPaymentValid(float data) {
  if (data >= 0)
    return 1;
  else
    return 0;
}

//Function to clear input
void clearInput() {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
