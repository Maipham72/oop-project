#ifndef VALID_H
#define VALID_H
#include <iostream>
#include <string>
#include <limits>


    bool isNumValid(int data) {
        return ((data >= 1) && (data <= 4));
    }
    void clearInput() {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

#endif
