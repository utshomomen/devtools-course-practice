// Copyright 2019 Utsho Momen

#include "include/linkedlist_app.h"
#include "include/LinkedList.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

std::string LinkedListApp::operator()(int argc, const char** argv) {
    LinkedList<std::string> *link1;
    std::ostringstream stream;

    if (argc > 2) {
        stream << "Incorrect syntax. Try: ./linkedlist_app <number_of_nodes>\n";
        message_ = stream.str();
        return message_;
    }
    if (atoi(argv[1]) == 0) {
        stream << "Cannot create linked list with 0 nodes. Try 1 at least.";
        message_ = stream.str();
        return message_;
    }
    if (atoi(argv[1]) != 0) {
        int length = abs(atoi(argv[1]));
        std::string strFirst("node");
        Node<std::string> *first = new Node<std::string>(strFirst, nullptr);

        for (int i = 0; i < length; ++i) {
            link1->addFirst(first);
            stream << " " << i << " ";
        }

        stream << "\nCreated.";
        message_ = stream.str();
        return message_;
    }
    
    message_ = stream.str();
    return message_;
}
