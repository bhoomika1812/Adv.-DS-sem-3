//You are provided an initially empty text editor. The editor supports the following operations: 
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    string data;
    Node *next;
    public:
    Node (string x) {
        data = x;
        next = NULL;
    }
};
class stack1 {
    Node *top;
    public:
    stack1 () {
        top = NULL;
    }
    
    void push (string x) {
        Node *newnode = new Node(x);
        newnode -> next = top;
        top = newnode;
    }
    
    void pop () {
        if (top == NULL) {
            cout << "stack is empty" << endl;
            return;
        }
        cout << "top element: " << top -> data;
        cout << endl;
        
        Node *temp = top;
        top = top -> next;
        delete temp;
    }
    void peek () {
        if (top == NULL) {
            cout << "stack is empty" << endl;
            return;
        }
        cout << top -> data;
    }
    void display () {
        if (top == NULL) {
            cout << "stack is empty" << endl;
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
int main () {
    int n;
    cin >> n;
    stack1 s;
    s.push ("A");
    s.push ("B");
    s.push ("C");
    
    cout << "stack elements: ";
    s.display();
    
    s.pop();    // p=U according to question
    
    cout << "stack elements after pop: ";
    s.display();
    
    return 0;
}

/*
OUTPUT:-
stack elements: C B A 
top element: C
stack elements after pop: B A 
*/