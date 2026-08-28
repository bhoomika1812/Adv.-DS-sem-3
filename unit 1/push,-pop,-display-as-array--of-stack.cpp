#include <bits/stdc++.h>
using namespace std;

class stack1 {
    int array [20];
    int size;
    int top;
    
    public:
    stack1 (int N) {
        size = N;
        top = -1;
    }
    void push (int val) {
        if (top == size-1) {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        array[top] = val;
    }
    void pop () {
        if (top == -1) {
            cout << "stack underflow";
            return;
        }
        cout << array[top] << endl;
        top--;
    }
    void display () {
        if (top == -1) {
            cout << "stack is empty";
            return;
        }
        for (int i=top; i>=0; i--) {
            cout << array[i] << endl;
        }
    }
};

int main() {
	// your code goes here
	int N;
	cin >> N;
	stack1 s(N);
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.push(40);
	s.display();

    return 0;
}
