#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

void LinkedList::insertBeg(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertEnd(int val) {
    Node* newNode = new Node(val);
    if (isEmpty()) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::deleteNode(int val) {
    if (isEmpty()) return;

    if (head->value == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr && current->value != val) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) return;

    previous->next = current->next;
    delete current;
}
