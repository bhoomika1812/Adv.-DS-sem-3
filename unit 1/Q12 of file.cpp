/*
give  Implement a circular queue using an array, where vacant positions created
by deletions are reused by maintaining the circular property. perform the given
sequence of operations and display the final state of the circular queue. 
*/
#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int arr[10];
    int front, rear, size;

public:
    CircularQueue(int n) {
        size = n;
        front = rear = -1;
    }

    void enqueue(int x) {
        if ((rear + 1) % size == front) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Circular Queue: ";

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }
};

int main() {
    int n;

    cout << "Enter size of queue: ";
    cin >> n;

    CircularQueue q(n);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.dequeue();
    q.dequeue();

    // Reusing empty positions
    q.enqueue(50);
    q.enqueue(60);

    q.display();

    return 0;
}


/*
Sample Output 🖥️

For queue size 4:

Enter size of queue: 4
Deleted: 10
Deleted: 20
Circular Queue: 30 40 50 60
*/