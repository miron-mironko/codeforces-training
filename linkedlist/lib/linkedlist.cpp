#include "linkedlist.h"
LinkedList::LinkedList() { head = nullptr; }
LinkedList::~LinkedList() {}
bool LinkedList::empty() {
    if (head == nullptr) {
        return true;
    } else {
        return false;
    }
}
void LinkedList::push_front(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = head;
}
void LinkedList::push_back(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if ()
}