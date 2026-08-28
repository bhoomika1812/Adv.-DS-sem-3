#include <bits/stdc++.h>
using namespace std;

class dequeue1 {
    int arr[20];
    int front, rear, size;
    public:
    dequeue1 (int n) {
        size = n;
        front = rear = -1;
    }
    //insertion at rear
    void enqueRear (int x) {
        if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "overflow";
            return;
        }
        else if (front == -1) {
            front = 0;
            rear = 0;
        }
        else if (rear == size - 1) {
            rear = 0;
        }
        else {
            rear = rear + 1;
        }
        arr[rear] = x;
    }
    //insertion at front
    void enqueFront (int x) {
        if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "overflow";
            return;
        }
        else if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = size - 1;
        }
        else {
            front = front + 1;
        }
        arr[front] = x;
    }
    // deletion at rear
    void dequeRear () {
        if (front == -1) {
            cout << "underflow";
            return;
        }
        if (front = rear) {
            front = rear = -1;    // single element
        }
        else if (rear = 0) {
            rear = size - 1;
        }
        int val;
        val = arr[rear];
        rear = rear - 1;
    }
    void display () {

    }
};
int main () {
    int n;
    cout << "enter size: ";
    cin >> n;
    dequeue1 obj(n);
    obj.enqueFront(10);
}