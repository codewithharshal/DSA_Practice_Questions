#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class Deque
{
private:
    Node *front;
    Node *rear;

public:
    Deque() : front(nullptr), rear(nullptr) {}

    // Insert at front
    void insertFront(int val)
    {
        Node *newNode = new Node(val);
        if (front == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Insert at rear
    void insertRear(int val)
    {
        Node *newNode = new Node(val);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    // Delete from front
    int deleteFront()
    {
        if (front == nullptr)
        {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        int val = front->data;
        Node *temp = front;
        front = front->next;
        if (front)
            front->prev = nullptr;
        else
            rear = nullptr;
        delete temp;
        return val;
    }

    // Delete from rear
    int deleteRear()
    {
        if (rear == nullptr)
        {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        int val = rear->data;
        Node *temp = rear;
        rear = rear->prev;
        if (rear)
            rear->next = nullptr;
        else
            front = nullptr;
        delete temp;
        return val;
    }

    // Display elements
    void display()
    {
        if (front == nullptr)
        {
            cout << "Deque is empty!" << endl;
            return;
        }
        cout << "Deque: ";
        Node *curr = front;
        while (curr)
        {
            cout << curr->data << " <-> ";
            curr = curr->next;
        }
        cout << "nullptr" << endl;
    }

    // Check if empty
    bool isEmpty()
    {
        return front == nullptr;
    }
};

int main()
{
    Deque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertRear(30);
    dq.display();

    cout << "Deleted from front: " << dq.deleteFront() << endl;
    cout << "Deleted from rear: " << dq.deleteRear() << endl;
    dq.display();

    return 0;
}