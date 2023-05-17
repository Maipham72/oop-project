#include "BubbleTea.h"
#include "Coffee.h"
#include "Drinks.h"

class DrinksTest {
 public:
  void runDrinksTest() {
    testDrinks();
    testBubbleTea();
    testCoffee();
  }

 private:
  void testDrinks() {
    {
      Drinks* d = new Drinks();
      d->setIceLevel(100);
      d->setSugarLevel(80);
      if ((d->getIceLevel() != 100) || (d->getSugarLevel() != 80)) {
        cout << "Test 1 for drinks failed!" << endl;
      }
    }
    {
      Drinks* d = new Drinks();
      d->setIceLevel(75);
      d->setSugarLevel(100);
      if (d->getIceLevel() != 75 || d->getSugarLevel() != 100) {
        cout << "Test 2 for drinks failed!" << endl;
      }
    }
    {
      Drinks* d = new Drinks();
      d->setIceLevel(25);
      d->setSugarLevel(25);
      if (d->getIceLevel() != 25 || d->getSugarLevel() != 25) {
        cout << "Test 3 for drinks failed!" << endl;
      }
    }
  }
  void testBubbleTea() {
    // Test 1
    {
      BubbleTea* bubbleTea = new BubbleTea("Black");
      /*Tea type should be Black */
      if (bubbleTea->getTeaType() != "Black") {
        cout << "Test 1 for BubbleTeafailed!" << endl;
      }
    }
    // Test 2
    {
      BubbleTea* bubbleTea = new BubbleTea("Green");
      if (bubbleTea->getTeaType() != "Green") {
        cout << "Test 2 for BubbleTea failed!" << endl;
      }
    }  // Test 3
    {}
  }
  void testCoffee() {
    // Test 1
    {
      Coffee* coffee = new Coffee();
      coffee->setCaffeineLevel(100);
      if (coffee->getCaffeineLevel() != 100) {
        cout << "Test 1 for coffee failed!" << endl;
      }
    }
    // Test 2
    {
      Coffee* coffee = new Coffee();
      coffee->setCaffeineLevel(25);
      if (coffee->getCaffeineLevel() != 25) {
        cout << "Test 2 for coffee failed!" << endl;
      }
    }
    // Test 3
    {
      Coffee* coffee = new Coffee();
      coffee->setCaffeineLevel(0);
      if (coffee->getCaffeineLevel() != 0) {
        cout << "Test 3 for coffee failed!" << endl;
      }
    }
  }
};
