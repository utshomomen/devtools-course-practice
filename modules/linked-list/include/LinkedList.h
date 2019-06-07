// Copyright 2019 Asyanin Mikhail

#ifndef MODULES_LINKED_LIST_INCLUDE_LINKEDLIST_H_
#define MODULES_LINKED_LIST_INCLUDE_LINKEDLIST_H_

#include <string>
#include <iostream>

template <typename T>
struct Node {
    T data;
    Node *next;

    Node<T>(T data, Node *next) {
        this->data = data;
        this->next = next;
    }
};

template <typename T>
class LinkedList {
 public:
    inline LinkedList();
    inline ~LinkedList();
    inline bool isEmpty();
    inline void addFirst(Node<T> *node);
    inline Node<T> *getHead();
    inline T getFirst();
    inline T removeFirst();
    inline void addLast(Node<T> *node);
    inline T getLast();
    inline void add(Node<T> *head, T data);
    inline void clear();
    inline Node<T> *searchNode(T data);
    inline bool deleteNode(Node<T> *node);

 private:
    Node<T> *head;
};

template <typename T>
inline LinkedList<T>::LinkedList() {
    this->head = nullptr;
}

template <typename T>
inline LinkedList<T>::~LinkedList() {
}

template <typename T>
inline bool LinkedList<T>::isEmpty() {
    return this->head == nullptr;
}

template <typename T>
inline void LinkedList<T>::addFirst(Node<T> *node) {
    this->head = node;
}

template <typename T>
inline Node<T> * LinkedList<T>::getHead() {
    return this->head;
}

template <typename T>
inline T LinkedList<T>::getFirst() {
    if (this->head == nullptr) {
        return T{};
    }
    return this->head->data;
}

template <typename T>
inline T LinkedList<T>::removeFirst() {
    T tmp = getFirst();
    if (tmp == T{}) {
        return T{};
    }
    this->head = head->next;
    return tmp;
}

template <typename T>
inline void LinkedList<T>::addLast(Node<T> *node) {
    if (this->head == nullptr) {
        addFirst(node);
    } else {
        Node<T> *tmp = head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = new Node<T>(node->data, nullptr);
    }
}

template <typename T>
inline T LinkedList<T>::getLast() {
    if (this->head == nullptr) {
        return T{};
    }
    Node<T> *tmp = this->head;
    while (tmp->next != nullptr) {
        tmp = tmp->next;
    }
    return tmp->data;
}

template <typename T>
inline void LinkedList<T>::add(Node<T> *head, T data) {
    Node<T> *cur;
    Node<T> *newNode = new Node<T>(data, nullptr);
    if (this->head == nullptr) {
        this->head = newNode;
        return;
    }
    cur = head;
    while (cur) {
        if (cur->next == nullptr) {
            cur->next = newNode;
            return;
        }
        cur = cur->next;
    }
}

template <typename T>
inline void LinkedList<T>::clear() {
    Node<T> *p, *q;
    if (this->head == nullptr) {
    }
    p = this->head;
    while (p) {
        q = p->next;
        delete p;
        if (q != this->head)  {
            this->head = nullptr;
            return;
        }
    }
}

template <typename T>
inline Node<T> * LinkedList<T>::searchNode(T data) {
    Node<T> *cur = this->head;
    while (cur) {
        if (cur->data == data) {
            return cur;
        }
        cur = cur->next;
    }
    std::cout << "No Node<T> " << data << " in list" << std::endl;
    return nullptr;
}

template <typename T>
inline bool LinkedList<T>::deleteNode(Node<T> *node) {
    Node<T> *cur = this->head;
    if (node == this->head) {
    }

    while (cur) {
        if (cur->next == node) {
            cur->next = node->next;
            delete node;
            return true;
        }
        cur = cur->next;
    }
}

#endif  // MODULES_LINKED_LIST_INCLUDE_LINKEDLIST_H_
