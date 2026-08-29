#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    double r1 = (p1.first * 1.0) / (p1.second * 1.0);
    double r2 = (p2.first * 1.0) / (p2.second * 1.0);
    return r1 < r2;
}

// Function to get the maximum total value in the knapsack
double fractionalKnapsack(int W, int n, vector<int> &values, vector<int> &weights)
{
    // Write your solution here
    vector<pair<int, int>> v1;
    for (int i = 0; i < n; i++)
    {
        v1.push_back({values[i], weights[i]});
    }
    sort(v1.begin(), v1.end(), cmp);
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i].second <= W)
        {
            profit += v1[i].first;
            W -= v1[i].second;
        }
        else
        {
            profit += ((v1[i].first * 1.0) / (v1[i].second * 1.0)) * W;
            W = 0;
            break;
        }
    }
    return profit;
}

int main()
{
    // Testcase 1
    int W1 = 50;
    vector<int> values1 = {60, 100, 120};
    vector<int> weights1 = {10, 20, 30};
    cout << "Testcase 1: " << fractionalKnapsack(W1, 3, values1, weights1) << endl;

    // Testcase 2
    int W2 = 70;
    vector<int> values2 = {100, 280, 120, 120};
    vector<int> weights2 = {10, 40, 20, 24};
    cout << "Testcase 2: " << fractionalKnapsack(W2, 4, values2, weights2) << endl;

    // Testcase 3
    int W3 = 10;
    vector<int> values3 = {500};
    vector<int> weights3 = {30};
    cout << "Testcase 3: " << fractionalKnapsack(W3, 1, values3, weights3) << endl;

    // Testcase 4
    int W4 = 0;
    vector<int> values4 = {10, 5};
    vector<int> weights4 = {2, 3};
    cout << "Testcase 4: " << fractionalKnapsack(W4, 2, values4, weights4) << endl;

    // Testcase 5
    int W5 = 15;
    vector<int> values5 = {10, 7, 8};
    vector<int> weights5 = {5, 3, 8};
    cout << "Testcase 5: " << fractionalKnapsack(W5, 3, values5, weights5) << endl;

    return 0;
}