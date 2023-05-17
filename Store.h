#include <stack>
#include <string>
#ifndef STORE_H
#define STORE_H

class Store {
 private:
  std::string name;
  // A stack that keeps track of all the orderIDs
  static std::stack<int> orderIDs;

 public:
  // Store name is MJ Diner by default
  Store() { name = "MJ Diner"; }

  // A static function that will generate an order ID
  static int generateOrderID();
};
#endif

// Iniatiate a stack with 20 IDs
std::stack<int> Store::orderIDs({20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
                                 10, 9,  8,  7,  6,  5,  4,  3,  2,  1});

int Store::generateOrderID() {
  int generatedID = orderIDs.top();
  orderIDs.pop();
  return generatedID;
};