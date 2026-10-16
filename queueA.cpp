#include <iostream>
using namespace std;

#define SIZE 5

int q[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
    } else {
        if (front == -1)
            front = 0;

        q[++rear] = x;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
    } else {
        cout << "Deleted: " << q[front] << endl;
        front++;

        if (front > rear)
            front = rear = -1;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();

    return 0;
}