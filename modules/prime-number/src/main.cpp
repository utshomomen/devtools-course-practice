// Copyright 2019 by Utsho Momen

#include <iostream>

#include "include/PrimeNumber.h"
using namespace std;

int main() {
    int n;
    cout << "Please enter number for which prime number to find : ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input" << endl;
    } else {
        cout << n << "the prime number is " << PrimeNumber(n) << endl;
    }
    return 0;
}
