#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list;

    list.insertBeg(10);
    list.insertEnd(20);
    list.insertEnd(30);

    cout << "List after insertions: ";
    Node* temp = list.head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;

    list.deleteNode(20);
    cout << "List after deletion: ";
    temp = list.head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}