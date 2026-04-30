#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    int target = 4;

    // find in sets
    if (s.find(target) != s.end())
    {
        cout << "exist";
    }
    else
    {
        cout << "not exist";
    }

    // printing sets elements
    // for each
    // for (int ele : s)
    // {
    //     cout << ele << " ";
    // }
}