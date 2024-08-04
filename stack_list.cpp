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
        return head == nullptr;
    }

    void push(int new_data) {
        Node* new_node = new Node(new_data);

        if (!new_node) {
            cout << "\nStack Overflow";

            new_node->next = head;
            head = new_node;
        }
    }

    void pop() {
        if (this->isEmpty()) {
            cout << "\nStack Underflow" << endl;
        }
        else {
            // Assign the current top to a temporary variable
            Node *temp = head;

            head = head->next;

            delete temp;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return head->data;
        }
        else {
            cout << "\nStack is empty";
            return INT_MIN;
        }
    }
};

int main() {

}