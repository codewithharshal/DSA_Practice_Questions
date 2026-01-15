#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "   fly me   to   the moon  ";
    string temp;
    vector<string> st;
    stringstream ss(s);
    int i = 0;
    while (getline(ss, temp, ' '))
    {
        st.push_back(temp);
        cout << st[i] << endl;
        i++;
    }
    int n = st.size();
    int l = st[n - 1].length();
    cout << l;
    return 0;
}