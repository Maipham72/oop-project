test: tests.cpp CardPaymentTest.cpp DrinksTest.cpp CashPaymentTest.cpp
	g++ -std=c++11 -Wall -Wextra -o test tests.cpp CardPaymentTest.cpp DrinksTest.cpp CashPaymentTest.cpp

main: main.cpp
	g++ -std=c++11 -Wall -Wextra -o main main.cpp 