#include <iostream>
using namespace std;

class minHeap
{
public:
    int arr[50];
    int idx = 1;

    int top()
    {
        return arr[1];
    }

    void push(int value)
    {
        arr[idx] = value;
        int i = idx;
        idx++;
        // swaping of i with parent
        while (i != 1)
        {
            int parent = i / 2;
            if (arr[i] < arr[parent])
            {
                swap(arr[i], arr[parent]);
            }
            else
                break;
            i = parent;
        }
    }

    int size()
    {
        return idx;
    }

    void pop()
    {
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        // rearrangement
        while (true)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left > idx - 1)
                break;

            if (right > idx - 1)
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
            }
            if (arr[left] < arr[right])
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else
                    break;
            }
            else
            {
                if (arr[i] > arr[right])
                {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else
                    break;
            }
        }
    }

    void display()
    {
        for (int x = 1; x < idx; x++)
        {
            cout << arr[x] << " ";
        }
        cout << endl;
    }
};

int main()
{
    minHeap *minH = new minHeap();
    minH->push(10);
    minH->push(2);
    minH->push(14);
    minH->push(11);
    minH->push(1);
    minH->push(4);
    minH->display();
    minH->pop();
    minH->pop();
    minH->pop();
    cout << minH->top() << endl;
    minH->display();
    cout << "Size: " << minH->size() << endl;
}