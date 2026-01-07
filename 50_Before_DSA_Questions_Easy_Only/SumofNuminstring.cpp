#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "The number are 12 and 34";
    stringstream ss(str);
    string word;
    int sum = 0;
    vector<int> number;

    while (ss >> word)
    {
        bool isNumber = true;
        for (char c : word)
        {
            if (!isdigit(c))
            {
                isNumber = false;
                break;
            }
        }

        if (isNumber)
        {
            sum += stoi(word);
        }
    }

    cout << sum;

    return 0;
}