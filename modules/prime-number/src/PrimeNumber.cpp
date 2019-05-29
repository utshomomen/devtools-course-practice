// Copyright 2019 by Utsho Momen

#include "include/PrimeNumber.h"

#include <math.h>

bool isPrimeNumber(int num);


int PrimeNumber(int input) {

    int count = 0;
    int num = 0;


    if (input <= 0) {
        return -1;
    }
    while (count != input) {
        if (isPrimeNumber(++num)) {
            count++;
        }
    }
    return num;
}

bool isPrimeNumber(int num) {

    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {

       if (num % i == 0) {
            return false;
       }
    }

    return true;
}
