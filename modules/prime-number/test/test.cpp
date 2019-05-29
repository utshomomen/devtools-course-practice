// Copyright 2019 by Utsho Momen

#include "gtest/gtest.h"
#include <iostream>
#include "include/PrimeNumber.h"


TEST(UtshoMomenTest, test_eq) {
    EXPECT_EQ(3, 3);
}

TEST(UtshoMomenTest, test_neq) {
    EXPECT_NE(1, 2);
}

TEST(PrimeNumber_Tests, validnumber) {

    EXPECT_EQ(5, PrimeNumber(3));
    EXPECT_EQ(17, PrimeNumber(7));
    EXPECT_EQ(31, PrimeNumber(11));

}

TEST(PrimeNumber_Tests, invalidnumber) {

    EXPECT_EQ(-1, PrimeNumber(0));
    EXPECT_EQ(-1, PrimeNumber(-2));

}