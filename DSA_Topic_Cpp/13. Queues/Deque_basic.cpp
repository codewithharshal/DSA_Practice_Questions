#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_front(10);
    d.push_back(20);
    d.pop_back();
    d.pop_front();
    d.size();
    d.front();
    d.back();
}