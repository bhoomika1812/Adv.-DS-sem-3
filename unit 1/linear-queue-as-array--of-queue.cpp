#include <bits/stdc++.h>
using namespace std;

class queue1 {
    int arr[20];
    int front, rear, size;
    public:
    queue1 (int n) {
        size = n;
        front = rear = -1;
    }
    int isfull () {
        if (rear == size - 1) {
            cout << "overflow" << endl;
            return 1;
        }
        else {
            return 0;
        }
    }
    int isempty () {
        if (front == -1) {
            cout << "underflow" << endl;
            return 1;
        }
        else {
            return 0;
        }
    }
    void enqueue (int x) {
        if (isfull()) {
            cout << "array is full";
            return;
        }
        if (isempty ()) {
            front = 0;
        }
        rear++;
        arr[rear] = x;
    }
    void dequeue1 () {
        if (isempty()) {
            front = -1;
            cout << "array is empty";
            return;
        }
        int val = arr[front];
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front++;
        }
    }
    void display () {
        if (isempty()) {
            cout << "array is empty";
            return;
        }
        for (int i=front; i<=rear; i++) {
            cout << arr[i] << endl;
        }
    }
};
int main () {
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    queue1 obj(n);
    obj.enqueue (10);
    obj.enqueue (20);
    obj.enqueue (30);
    obj.display ();
}
