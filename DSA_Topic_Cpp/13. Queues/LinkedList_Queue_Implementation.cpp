#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue
{
private:
    Node *front;
    Node *rear;
    int size;

public:
    Queue() : front(nullptr), rear(nullptr), size(0) {}

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    void pop()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
        size--;
    }

    int getFront()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }

    int getBack()
    {
        if (rear == nullptr)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return rear->data;
    }

    int getSize()
    {
        return size;
    }

    void display()
    {
        Node *temp = front;
        cout << "Queue: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~Queue()
    {
        while (front != nullptr)
        {
            pop();
        }
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getBack() << endl;
    cout << "Size: " << q.getSize() << endl;
    q.pop();
    q.display();
    return 0;
}