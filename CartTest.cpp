#include <iostream>

#include "BubbleTea.h"
#include "Burger.h"
#include "Cart.h"
#include "Coffee.h"
#include "MenuItem.h"
#include "Pizza.h"

class CartTest {
 public:
  void runCartTest() {
    testAddOneMenuItem();
    testAddTwoMenuItems();
    testAddEmptyMenuItem();
  }

 private:
  void testAddOneMenuItem() {
    // Test 1: Menu Item
    {
      MenuItem menuItem("MenuItem", 9.50);
      Cart cart;
      cart.addItem(menuItem);
      // Menu Item's price initialised to 9.50
      // If total in cart is not equal to 9.50, test failed
      if (cart.getTotal() != 9.5) {
        cout << "Menu Item not added, test 1 failed!" << endl;
      }
    }
    // Test 2: Pizza
    {
      Pizza pizza("Margherita");
      Cart cart;
      cart.addItem(pizza);
      // Pizza price is 10
      // If total in cart not equal to 10, test failed
      if (cart.getTotal() != 10) {
        cout << "Pizza was not added, test 2 failed!" << endl;
      }
    }

    // Test 3: BubbleTea
    {
      BubbleTea bubbleTea("Green");
      Cart cart;
      cart.addItem(bubbleTea);

      // Bubble Tea price is 7
      // If total of cart is not 7, test failed;
      if (cart.getTotal() != 7) {
        cout << "Bubble tea was not added, test 3 failed!" << endl;
      }
    }
  }
  void testAddTwoMenuItems() {
    {// Test 4: Add One Pizza and One Coffee
     {Pizza pizza("Margherita");
    Cart cart;
    cart.addItem(pizza);
    // Pizza price is 10
    // If total in cart not equal to 10, test failed
    if (cart.getTotal() != 10) {
      cout << "Pizza was not added, test 4 failed!" << endl;
    }

    Coffee coffee(50);
    cart.addItem(coffee);
    // Total price should be 10 + 6.5 = 16.5
    if (cart.getTotal() != 16.5) {
      cout << "Coffee was not added, test 4 failed!" << endl;
    }
  }
} {
  // Test 5: Add One Burger and One Bubble Tea
  {
    Burger burger("chicken", "potato");
    Cart cart;
    cart.addItem(burger);
    // Pizza price is 9.5
    // If total in cart not equal to 9.5, test failed
    if (cart.getTotal() != 9.5) {
      cout << "Pizza was not added, test 5 failed!" << endl;
    }

    BubbleTea bubbleTea("green");
    cart.addItem(bubbleTea);
    // Total price should be 9.5 + 7 = 16.5
    if (cart.getTotal() != 16.5) {
      cout << "BubbleTea was not added, test 5 failed!" << endl;
    }
  }
}
}

void testAddEmptyMenuItem() {
  // Test 6
  {
    MenuItem menuItem;
    Cart cart;
    cart.addItem(menuItem);
    // Menu Item's price initialised to 0
    // If total in cart is not equal to 0, test failed
    if (cart.getTotal() != 0) {
      cout << "Empty menu item test (Test 7) failed!" << endl;
    }
  }
  // Test 7
  {
    Coffee coffee;
    Cart cart;
    cart.addItem(coffee);
    // Menu Item's price initialised to 0
    // If total in cart is not equal to 0, test failed
    if (cart.getTotal() != 0) {
      cout << "Empty menu item test (Test 7) failed!" << endl;
    }
  }
}
}
;