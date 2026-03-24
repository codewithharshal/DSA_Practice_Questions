#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int> &arr)
{
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}

void cycleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int cycleStart = 0; cycleStart < n - 1; cycleStart++)
    {
        cout << "\n=== Cycle Start Index: " << cycleStart << " ===\n";

        int item = arr[cycleStart];
        int pos = cycleStart;

        cout << "Start item = " << item << endl;

        // Find correct position
        for (int i = cycleStart + 1; i < n; i++)
            if (arr[i] < item)
                pos++;

        cout << "Correct position for " << item << " = " << pos << endl;

        if (pos == cycleStart)
        {
            cout << "Already in correct position. Skipping cycle.\n";
            continue;
        }

        while (item == arr[pos])
            pos++;

        cout << "Placing " << item << " at index " << pos << endl;
        swap(item, arr[pos]);
        printArray(arr);

        // Rotate the rest of the cycle
        while (pos != cycleStart)
        {
            pos = cycleStart;

            for (int i = cycleStart + 1; i < n; i++)
                if (arr[i] < item)
                    pos++;

            while (item == arr[pos])
                pos++;

            cout << "Rotating: placing " << item << " at index " << pos << endl;
            swap(item, arr[pos]);
            printArray(arr);
        }

        cout << "Cycle completed.\n";
    }
}

int main()
{
    vector<int> arr = {20, 40, 50, 10, 30};

    cout << "Initial array: ";
    printArray(arr);

    cycleSort(arr);

    cout << "\nFinal sorted array: ";
    printArray(arr);

    return 0;
}
