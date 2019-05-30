// Copyright 2019 by Utsho Momen

#include <iostream>

#include "include/PrimeNumber.h"

int main() {
    int n;
    std::cout << "Please enter number for which prime number to find : ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "Invalid input" << std::endl;
    } else {
        std::cout << n << "the prime number is " << PrimeNumber(n) << std::endl;
    }
    return 0;
}
