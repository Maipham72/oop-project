#include "Burger.h"
#include "MenuItem.h"
#include "Pizza.h"

class MenuItemTest {
 public:
  void runMenuItemTest() {
    testMenuItems();
    testPizza();
    testBurger();
  }

 private:
  void testMenuItems() {
    MenuItem *item1 = new MenuItem("burger", 9.5);
    if (item1->getName() != "burger" || item1->getPrice() != 9.5) {
      cout << "Test failed!" << endl;
    }
  }

  void testPizza() {
    {
      Pizza *p = new Pizza;
      p->setTopping("Pineapple");
      // Pizza should have pineapple topping
      if (p->getTopping() != "Pineapple") {
        cout << "Test failed" << endl;
      } else {
        cout << "Test passed" << endl;
      }
    }

    {
      Pizza *p = new Pizza;
      p->setTopping(" ");
      // Pizza should have no topping
      if (p->getTopping() != " ") {
        cout << "Test failed" << endl;
      } else {
        cout << "Test passed" << endl;
      }
    }
  }

  void testBurger() {
    {
      Burger *b = new Burger;
      b->setMeatType("Beef");
      b->setBunType("plain");
      // Pizza should have pineapple topping
      if (b->getMeatType() != "Beef" || b->getBunType() != "plain") {
        cout << "Test failed" << endl;
      } else {
        cout << "Test passed" << endl;
      }
    }
    {
      Burger *b = new Burger;
      b->setMeatType(" ");
      b->setBunType(" ");
      // BUeger should have nothing
      if (b->getMeatType() != " " || b->getBunType() != " ") {
        cout << "Test failed" << endl;
      } else {
        cout << "Test passed" << endl;
      }
    }
  }
};