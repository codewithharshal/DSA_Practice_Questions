#include <iostream>
using namespace std;

class Array_Queue_Implementation
{
private:
    int *arr;
    int size;
    int front;
    int back;
    int capacity;

public:
    Array_Queue_Implementation(int capacity, int size, int front, int back)
    {
        this->capacity = capacity;
        this->arr = new int[capacity];
        this->size = 0;
        this->front = front;
        this->back = back;
    };

    // void Push
    void Push(int val)
    {
        if (size == capacity)
        {
            cout << "Queue is full";
            return;
        }
        arr[back] = val;
        back++;
        size++;
    }
    // void Pop
    void Pop()
    {
        if (size == 0)
        {
            cout << "Queue is empty";
            return;
        }
        front++;
        size--;
    }
    // int size
    int getsize()
    {
        return size;
    }
    // int front
    int getfront()
    {
        if (size == 0)
        {
            cout << "Queue is empty";
            return 0;
        }
        return arr[front];
    }
    // int back
    int getback()
    {
        if (size == 0)
        {
            cout << "Queue is empty";
            return 0;
        }
        return arr[back];
    }
    // display
    void display()
    {
        for (int i = front; i < back; i++)
        {
            cout << arr[i] << " ";
        }
    }

    ~Array_Queue_Implementation()
    {
        delete[] arr;
    };
};

int main()
{
    Array_Queue_Implementation *Queue = new Array_Queue_Implementation(5, 0, 0, 0);
    Queue->Push(10);
    Queue->Push(20);
    Queue->Push(30);
    Queue->Push(40);
    cout << Queue->getsize();
    Queue->display();
    delete Queue;
}
