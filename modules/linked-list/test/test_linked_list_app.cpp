// Copyright 2019 Utsho Momen

#include <utility>
#include <vector>
#include <string>

#include "gtest/gtest.h"

#include "include/linkedlist_app.h"



TEST(LinkedList, Can_Create_Empty_Stack) {
    // Arrange & Arrange
    LinkedList y;

    // Assert
    EXPECT_EQ(y.Size(), 0);
}


TEST(LinkedList, Can_Push_In_Empty_Stack) {
    // Arrange
    LinkedList y;

    // Act
    y.Push(21);

    // Assert
    EXPECT_EQ(21, y.Top().first);
}

TEST(LinkedList, Can_Define_Empty_Stack) {
    // Arrange
    std::vector<int> x = {4};
    LinkedList y(x);
    bool valid = false;
    y.Pop();

    // Act
    valid = y.Empty();

    // Assert
    EXPECT_TRUE(valid == true);
}
