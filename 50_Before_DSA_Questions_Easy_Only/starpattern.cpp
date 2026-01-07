#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void IncreasignTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void Right_AlignedTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void Pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i - 1; j >= 0; j--)
        {
            // spaces
            cout << "- ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            // star
            cout << "* ";
        }
        cout << endl;
    }
}
void InvertedPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // spaces
            cout << "  ";
        }
        for (int k = i + 1; k < n + (n - i); k++)
        {
            // star
            cout << "* ";
        }
        cout << endl;
    }
}
void Hollow_Square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 || j == 0) || (i == n - 1 || j == n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "\n 1. Increasing Triangle Pattern  \n 2. Right-Aligned Triangle Pattern \n 3. Pyramid \n 4. Inverted Pyramid \n 5. Hollow Square \n";
    cout << "Enter Pattern number: ";
    cin >> num;

    switch (num)
    {
    case 1:
    {
        int height;
        cout << "Enter height: ";
        cin >> height;
        IncreasignTriangle(height);
        break;
    }
    case 2:
    {
        int height;
        cout << "Enter height: ";
        cin >> height;
        Right_AlignedTriangle(height);
        break;
    }
    case 3:
    {
        int height;
        cout << "Enter height: ";
        cin >> height;
        Pyramid(height);
        break;
    }
    case 4:
    {
        int height;
        cout << "Enter height: ";
        cin >> height;
        InvertedPyramid(height);
        break;
    }
    case 5:
    {
        int height;
        cout << "Enter height: ";
        cin >> height;
        Hollow_Square(height);
        break;
    }
    default:
    {
        cout << "invalid";
        break;
    }
    }

    return 0;
}