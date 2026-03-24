#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;
    int rightway = maze(sr, sc + 1, er, ec);
    int downway = maze(sr + 1, sc, er, ec);
    return rightway + downway;
}

void mazePath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }
    mazePath(sr, sc + 1, er, ec, s + 'R');
    mazePath(sr + 1, sc, er, ec, s + 'D');
}

int main()
{

    mazePath(1, 1, 3, 3, "");
    cout << maze(1, 1, 3, 3);
    return 0;
}