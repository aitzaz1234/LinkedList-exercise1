#pragma once

#include "Node.h"

class LinkedList {
public:
    Node* head;


    LinkedList();


    bool isEmpty() const;


    void insertBeg(int val);


    void insertEnd(int val);


    void deleteNode(int val);
};

