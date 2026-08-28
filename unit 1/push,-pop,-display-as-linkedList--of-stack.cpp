#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;          // Changed val to x
        next = NULL;
    }
};

class stack1 {
    Node *top;

public:                    // Added public
    stack1() {             // Constructor should have ()
        top = NULL;
    }

    void push(int x) {
        Node *newnode = new Node(x);
        newnode->next = top;
        top = newnode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node *temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    stack1 s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    s.pop();

    cout << "After pop: ";
    s.display();

    return 0;
}