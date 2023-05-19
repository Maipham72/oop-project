#include <iostream>
#include "Coffee.h"
#include "BubbleTea.h"
#include "Cart.h"
#include "MenuItem.h"
#include "Pizza.h"

class CartTest {
 public:
  void runCartTest() {
    testAddOneMenuItem();
    testAddTwoMenuItems();
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
    {
      // Test 4: Add One Pizza and One Coffee
      {
        Pizza pizza("Margherita");
        Cart cart;
        cart.addItem(pizza);
        // Pizza price is 10
        // If total in cart not equal to 10, test failed
        if (cart.getTotal() != 10) {
          cout << "Pizza was not added, test 4 failed!" << endl;
        }

        Coffee coffee(50);
        cart.addItem(coffee);
        //Total price should be 10 + 6.5 = 16.5
        if (cart.getTotal() != 16.5){
            cout << "Coffee was not added, test 4 failed!" << endl;
        }
      }
    }
  }
};