/*
    Implementation for a stack using a singly-linked list.
    Node class represents a node in the linked list.
    We have a Stack class that contains a head.
    Stack() constructor initializes the stack, and we have a
    function that checks if the stack is empty by checking head.
    We have a function that pushes an element on the stack and link
    it to the head and update the head to newNode.
    Pop function removes the top element from the stack.
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

class Stack {
    Node* head;

public:
    Stack() { this->head = nullptr; }

    bool isEmpty() {

    }

    void push(int new_data) {

    }

    void pop() {

    }

    int peek() {

    }
};

int main() {

}