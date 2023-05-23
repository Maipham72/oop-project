test: tests.cpp cardPaymentTest.cpp DrinksTest.cpp cashPaymentTest.cpp MenuItemTest.cpp
	g++ -std=c++11 -Wall -Wextra -o test tests.cpp cardPaymentTest.cpp DrinksTest.cpp cashPaymentTest.cpp MenuItemTest.cpp

main: main.cpp BurgerChoice.cpp BubbleTeaChoice.cpp PizzaChoice.cpp CoffeeChoice.cpp valid.cpp printArt.cpp
	g++ -std=c++11 -Wall -Wextra -o main main.cpp BurgerChoice.cpp BubbleTeaChoice.cpp PizzaChoice.cpp CoffeeChoice.cpp valid.cpp printArt.cpp