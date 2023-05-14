#include <iostream>
#include <string>
using namespace std;
// #include "BubbleTea.h"
// #include "Burger.h"
// #include "Pizza.h"
// #include "Drinks.h"
// #include "MenuItem.h"
// #include "Cart.h"
// #include "Customer.h"
// #include "cardPayment.h"
// #include "cashPayment.h"
// #include "payment.h"
// #include "store.h"
#include <fstream>

void printArt(string fileName) {
  string line = "";
  ifstream inFile;
  inFile.open("mj.txt");
  {
    while(getline(inFile,line)) {
      cout << line << endl;
    }
  }
  inFile.close();
}

