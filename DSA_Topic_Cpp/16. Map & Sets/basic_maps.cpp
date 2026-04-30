#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["Apple"] = 1;
    m["Mango"] = 2;

    m.insert({"Banana", 3});

    // cout << m["Apple"];

    for (auto it : m)
    {
        cout << it.first << "->" << it.second << endl;
    }

    auto it = m.find("Apple");

    if (it != m.end())
    {
        cout << "Found:" << it->first;
    }
}