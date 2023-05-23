# Change Log: Online Food Ordering System 

Group Members: Hong Mai Pham, Joanne Xue Ping Su 

This is a change log on the changes made to the Online Food Ordering System during the execution phase of the project. The changes listed below are in chronological order. 

 

## 15 May 2023 

The item_list in the Cart class is now a vector instead an array of pointers to MenuItem objects.  

Reason: Vectors are easier to push and add different MenuItem objects as compared to an array of pointers. 

An add_item function was added to the Cart class. 

Reason: The function can take in any MenuItem object and push it to the vector containing MenuItem objects. This function can be accessed by the Customer class when adding new objects to cart. 

The deleteFromCart function was removed from the Customer class. 

Reason: Function was removed after taking into consideration the time constraints of the project. It was collectively decided that there would not be enough time to implement this function and thus it was removed. 

The makePayment function was removed from the Customer class. 

Reason: The existence of the Payment class and pay function made the makePayment function in the Customer class redundant.  

 

## 17 May 2023 

The card_number attribute in the CardPayment class was replaced with card_balance attribute with type float. 

Reason: Card number was found to be irrelevant during the transaction process. Instead, the balance of the card attribute was found to be more useful and relevant to functionality of the payment portion of the program.  

Removal of the cash_verification function from the Store class. 

Reason: Furthermore, the cash_verification function that was originally planned for the Store class was deemed unnecessary as the CashPayment class already contains a function to verify the amount of cash paid. 

 

## 18 May 2023 

The processCash function was added to the CashPayment class. 

Reason: To print out whether the cash payment was successful or not. 

GUI will no longer be implemented in the program. 

Reason: Time constraints. The program will run entirely in the terminal instead. 

 

## 19 May 2023 

The orderID attribute was removed from Customer, Store and Payment class and is removed from the entire program. 

Reason: Could not implement a function that could generate unique IDs. An attempt was made to implement this function by using static functions and stack of integers however it did not work as intended. As such, taking into consideration the time constraints of the project, the orderID plan was scrapped. 

 

## 22 May 2023 

The Store class was removed.  

Reason: Original plan to have Store class contain attributes such as name and location were not relevant to the functionality of the program.  

 

## 23 May 2023 

Unit test originally planned for Customer class is removed. 

Reason: Customer classes’ functions are similar to that in the Cart class. Since the cart class was already tested, there is no need to test the Customer class again. 

 

 