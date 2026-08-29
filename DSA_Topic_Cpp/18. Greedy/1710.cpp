#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    return a[1] > b[1]; // sort in decending order
}

// Function to find the maximum total units on a truck
int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
{
    // Write your solution here
    sort(boxTypes.begin(), boxTypes.end());
    int profit = 0;
    for (int i = 0; i < boxTypes.size(); i++)
    {
        if (boxTypes[i][0] <= truckSize)
        {
            profit += boxTypes[i][0] * boxTypes[i][1];
            truckSize -= boxTypes[i][0];
        }
        else
        {
            profit -= truckSize * boxTypes[i][1];
            truckSize = 0;
        }
        if (truckSize == 0)
            break;
    }
    return profit;
}

int main()
{
    // Testcase 1
    vector<vector<int>> boxTypes1 = {{1, 3}, {2, 2}, {3, 1}};
    int truckSize1 = 4;
    cout << "Testcase 1: " << maximumUnits(boxTypes1, truckSize1) << endl;

    // Testcase 2
    vector<vector<int>> boxTypes2 = {{5, 10}, {2, 5}, {4, 7}, {3, 9}};
    int truckSize2 = 10;
    cout << "Testcase 2: " << maximumUnits(boxTypes2, truckSize2) << endl;

    // Testcase 3
    vector<vector<int>> boxTypes3 = {{2, 4}, {3, 6}, {1, 8}};
    int truckSize3 = 3;
    cout << "Testcase 3: " << maximumUnits(boxTypes3, truckSize3) << endl;

    // Testcase 4
    vector<vector<int>> boxTypes4 = {{1, 2}};
    int truckSize4 = 1;
    cout << "Testcase 4: " << maximumUnits(boxTypes4, truckSize4) << endl;

    // Testcase 5
    vector<vector<int>> boxTypes5 = {{3, 5}, {2, 8}};
    int truckSize5 = 0;
    cout << "Testcase 5: " << maximumUnits(boxTypes5, truckSize5) << endl;

    return 0;
}