#include <iostream>
using namespace std;
int main()
{
    string str = "bbcdefggfgicda";
    int arr[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        int x = (int)(str[i]) - 97;
        arr[x]++;
    }

    int Max = 0;
    for (int i = 0; i < 26; i++)
    {
        Max = max(Max, arr[i]);
    }
    cout << "Max: " << Max << endl;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == Max)
        {
            int ascii = i + 97;
            char ch = (char)(ascii);
            cout << ch << " " << arr[i] << endl;
        }
    }
}