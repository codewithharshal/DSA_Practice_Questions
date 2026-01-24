#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Custom max function for float values
*/
float max(float a, float b)
{
    if (a >= b)
        return a;
    else
        return b;
}

/*
    Custom min function for float values
*/
float min(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    // Input array
    int arr[] = {5, 3, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    /*
        kmin  -> maximum of all lower bounds of k
        kmax  -> minimum of all upper bounds of k
    */
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;

    bool possible = true;

    // Process each adjacent pair
    for (int i = 0; i < n - 1; i++)
    {
        /*
            If arr[i] >= arr[i+1]
            then k must be >= (arr[i] + arr[i+1]) / 2
        */
        if (arr[i] >= arr[i + 1])
        {
            kmin = max(kmin, (arr[i] + arr[i + 1]) / 2.0);
        }
        /*
            If arr[i] < arr[i+1]
            then k must be <= (arr[i] + arr[i+1]) / 2
        */
        else
        {
            kmax = min(kmax, (arr[i] + arr[i + 1]) / 2.0);
        }

        // If bounds become invalid, no solution exists
        if (kmin > kmax)
        {
            possible = false;
            break;
        }
    }

    // Case 1: No valid k exists
    if (!possible)
    {
        cout << -1;
    }
    // Case 2: Exactly one valid k
    else if (kmin == kmax)
    {
        // Check if k is an integer
        if (kmin == (int)kmin)
        {
            cout << "There is only one value: " << kmin;
        }
        else
        {
            cout << -1;
        }
    }
    // Case 3: Range of valid k values
    else
    {
        // Smallest integer >= kmin
        if (kmin > (int)kmin)
        {
            kmin = (int)kmin + 1;
        }

        cout << "Range of k is: " << kmin << ", " << (int)kmax << endl;
    }

    return 0;
}
