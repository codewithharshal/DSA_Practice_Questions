#include <iostream>
#include <vector>
using namespace std;

// Function to find the minimum cost to climb stairs
int minCostClimbingStairs(vector<int> &cost)
{
    // Write your solution here
}

int main()
{
    // Test case 1
    vector<int> cost1 = {10, 15, 20};
    cout << "Test case 1: " << minCostClimbingStairs(cost1) << endl; // Expected output: 15

    // Test case 2
    vector<int> cost2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << "Test case 2: " << minCostClimbingStairs(cost2) << endl; // Expected output: 6

    // Test case 3
    vector<int> cost3 = {0, 2, 2, 1};
    cout << "Test case 3: " << minCostClimbingStairs(cost3) << endl; // Expected output: 2

    // Test case 4
    vector<int> cost4 = {1, 2};
    cout << "Test case 4: " << minCostClimbingStairs(cost4) << endl; // Expected output: 1

    return 0;
}