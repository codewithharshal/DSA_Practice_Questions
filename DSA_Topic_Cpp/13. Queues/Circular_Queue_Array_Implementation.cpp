/* Fixed Circular Queue implementation with comments explaining changes */

#include <iostream>
#include <vector>

using namespace std;

class Circular_Queue
{
private:
    int front;    // Index of front element
    int back;     // Index where next element will be inserted
    int size;     // Current number of elements
    int capacity; // Maximum capacity
    vector<int> vec;

public:
    Circular_Queue(int k)
    {
        this->front = 0;
        this->back = 0;
        this->size = 0;
        this->capacity = k;
        this->vec = vector<int>(k);
    }

    bool enQueue(int val)
    {
        if (size == capacity)
        {
            cout << "Queue is full!" << endl;
            return false;
        }
        vec[back] = val;
        back = (back + 1) % capacity; // Proper wrap-around
        size++;
        return true;
    }

    bool deQueue()
    {
        if (size == 0)
        {
            cout << "Queue is empty!" << endl;
            return false;
        }

        front = (front + 1) % capacity; // Proper wrap-around
        size--;
        return true;
    }

    int Front()
    {
        if (size == 0)
            return -1;
        return vec[front];
    }

    int Rear()
    {
        if (size == 0)
            return -1;
        int rear_idx = (back + capacity - 1) % capacity;
        return vec[rear_idx];
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    // Destructor to free memory
    ~Circular_Queue()
    {
        // vector auto-clears
    }
};

int main()
{
    Circular_Queue q(5);

    // Test cases
    cout << "Enqueuing 10: " << (q.enQueue(10) ? "Success" : "Failed") << endl;
    cout << "Front: " << q.Front() << ", Rear: " << q.Rear() << endl;

    q.enQueue(20);
    q.enQueue(30);
    cout << "Front: " << q.Front() << ", Rear: " << q.Rear() << endl;

    q.deQueue();
    cout << "After dequeue - Front: " << q.Front() << ", Rear: " << q.Rear() << endl;

    // Test wrap-around
    q.enQueue(40);
    q.enQueue(50);
    q.enQueue(60); // Should fail as full now
    cout << "Front: " << q.Front() << ", Rear: " << q.Rear() << endl;

    return 0;
}
