#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // work on odd length n only
    int n = 123431;
    // cin>>n;
    int newReverseNumber = 0;
    int originalNumber = n;
    while (newReverseNumber <= originalNumber)
    {
        int lastDigit = originalNumber % 10;
        newReverseNumber = newReverseNumber * 10 + lastDigit;
        originalNumber = originalNumber / 10;
    }
    // Odd length
    newReverseNumber = newReverseNumber / 10;
    if (newReverseNumber == originalNumber)
    {
        cout << "Palindrom";
    }
    else
    {
        cout << "Not Palindrom";
    }
    return 0;
}