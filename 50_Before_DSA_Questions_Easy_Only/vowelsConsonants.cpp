#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool vowels(char a)
{
    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        if (a == arr[i])
        {
            return true;
        }
    }
    return false;
}

string plaineStr(string str)
{
    string s = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            s += str[i];
        }
    }
    return s;
}

int main()
{
    string str = "Hello world";
    int vowelCount = 0;
    int consonants = 0;
    string temp = plaineStr(str);
    for (int i = 0; i < temp.length(); i++)
    {
        if (vowels(temp[i]))
        {
            vowelCount++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowles: " << vowelCount << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}