#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class CircularQueue {
private:
    Node* rear;   // rear->next is the front

public:
    CircularQueue() : rear(nullptr) {}

    ~CircularQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() const {
        return rear == nullptr;
    }

    // Enqueue (push): insert at rear
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            newNode->next = newNode;      // single node points to itself
            rear = newNode;
        } else {
            newNode->next = rear->next;   // new node points to front
            rear->next = newNode;         // old rear points to new node
            rear = newNode;               // update rear
        }
        cout << value << " enqueued\n";
    }

    // Dequeue: remove from front
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow (empty)\n";
            return;
        }

        Node* front = rear->next;
        cout << front->data << " dequeued\n";

        if (front == rear) {              // only one node
            rear = nullptr;
        } else {
            rear->next = front->next;     // skip the old front
        }
        delete front;
    }

    // Peek: view front element without removing
    void peek() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front element: " << rear->next->data << "\n";
    }

    // Display all elements from front to rear
    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = rear->next;          // start at front
        cout << "Queue: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != rear->next);
        cout << "\n";
    }
};

int main() {
    CircularQueue q;
    int choice, value;

    while (true) {
        cout << "\n--- Circular Queue (Linked List) ---\n";
        cout << "1. Enqueue / Push\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                return 0;   // destructor frees all nodes
            default:
                cout << "Invalid choice\n";
        }
    }
}