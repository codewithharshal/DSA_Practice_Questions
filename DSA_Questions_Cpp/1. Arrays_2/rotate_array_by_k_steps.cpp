#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 Utility function that reverses the vector 'v'
 between indices i and j (inclusive).
 This is an in-place reversal.
*/
void reverseRange(vector<int> &v, int i, int j)
{
    while (i < j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

/*
 Rotates vector 'v' to the right by 'k' positions.
 Uses the 3-step reverse algorithm:
    1. Reverse the entire array
    2. Reverse first k elements
    3. Reverse remaining elements

 Example:
 v = [1 2 3 4 5 6 7 8 9], k = 4
 Right rotation result = [6 7 8 9 1 2 3 4 5]
*/
vector<int> rotateVector(vector<int> &v, int k)
{

    // Handle cases like k > size and k = size
    int n = v.size();
    k = k % n; // Reduce k to valid range

    // If k becomes 0 after mod, no rotation needed
    if (k == 0)
    {
        return v;
    }

    // Step 1: Reverse entire array
    reverseRange(v, 0, n - 1);

    // Step 2: Reverse first k elements
    reverseRange(v, 0, k - 1);

    // Step 3: Reverse remaining n-k elements
    reverseRange(v, k, n - 1);

    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 4;

    rotateVector(v, k);

    // Print rotated array
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
