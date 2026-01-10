#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // without size initalization
    // accessing values give error
    // vector<int> v;
    // cout << v[0]; :error
    // cout << v.size(); :0
    // cout << v.capacity(); :0

    // with size initalization
    // accessing values give 0 output
    // vector<int> v1(5);
    // cout << v1[0]; : 0
    // cout << v1.size(); : 5
    // cout << v1.capacity(); : 5

    // vector<int> v3(5, 10); // size is 5 and 10 is the values that are present in v3 vector for all space upto size

    // Not work this where we need to input values
    /*
        vector<int> v4;
        for (int i = 0; i < 5; i++)
        {
            cin >> v4[0];
            // we used this to add input values - for this size is the last of loop (i<5(5 is size))
            int x;
            cin >> x;
            v4.push_back(x);
        }
        for (int i = 0; i < 5; i++)
        {
            cout << v4[0];
        }
    */

    return 0;
}