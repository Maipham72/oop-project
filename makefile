test: tests.cpp PaymentTest.cpp DrinksTest.cpp CartTest.cpp CashPayment.cpp
	g++ -std=c++11 -Wall -Wextra -o test tests.cpp CardPaymentTest.cpp DrinksTest.cpp CartTest.cpp CashPayment.cpp

main: main.cpp
	g++ -std=c++11 -Wall -Wextra -o main main.cpp 