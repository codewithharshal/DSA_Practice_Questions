#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int total = numbers[i] + numbers[j];
        if (total == target)
        {
            return {i + 1, j + 1};
        }
        else if (total > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}

int main()
{
    /*
    vector<int> input_1 = {1, 2, 4, 6, 8, 9};
    int target = 10; // i++
    int target = 11; // j--
    vector<int> v = twoSum(input_1, target);
    for (int i : v)
    {
        cout << i;
    }
    */
}