//Write a C++ program to implement two stacks using a single array. 

#include <bits/stdc++.h>
using namespace std;

class TwoStacks {
    int arr[10];
    int top1, top2;

public:
    TwoStacks() {
        top1 = -1;
        top2 = 10;
    }

    void push1(int x) {
        if (top1 + 1 == top2)
            cout << "Stack Overflow\n";
        else
            arr[++top1] = x;
    }

    void push2(int x) {
        if (top1 + 1 == top2)
            cout << "Stack Overflow\n";
        else
            arr[--top2] = x;
    }

    void pop1() {
        if (top1 == -1)
            cout << "Stack 1 is empty\n";
        else
            cout << "Popped from Stack 1: " << arr[top1--] << endl;
    }

    void pop2() {
        if (top2 == 10)
            cout << "Stack 2 is empty\n";
        else
            cout << "Popped from Stack 2: " << arr[top2++] << endl;
    }

    void display1() {
        cout << "Stack 1: ";
        for (int i = top1; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }

    void display2() {
        cout << "Stack 2: ";
        for (int i = top2; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    TwoStacks s;

    s.push1(10);
    s.push1(20);
    s.push1(30);

    s.push2(40);
    s.push2(50);
    s.push2(60);

    s.display1();
    s.display2();

    return 0;
}

/*
Output
Stack 1: 30 20 10
Stack 2: 60 50 40

Complexity 
Operation	Time Complexity
Push	O(1)
Pop	O(1)

Space Complexity: O(n)
*/