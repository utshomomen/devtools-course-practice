// Copyright 2019 Utsho Momen

#include <string>

#ifndef MODULES_LINKED_LIST_INCLUDE_LINKEDLIST_APP_H_
#define MODULES_LINKED_LIST_INCLUDE_LINKEDLIST_APP_H_

class LinkedListApp {
 public:
    LinkedListApp() = default;
    std::string operator()(int argc, const char** argv);

 private:
    std::string message_;
};

#endif  // MODULES_LINKED_LIST_INCLUDE_LINKEDLIST_APP_H_
