#include <iostream>
using namespace std;

class Stack
{
    int idx = 0;
    int arr[6];

public:
    void push(int val)
    {
        idx++;
        arr[idx] = val;
    }

    void pop()
    {
        idx--;
    }
    int top()
    {
        return arr[idx];
    }
    int size()
    {
        return idx;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    while (st.size())
    {
        cout << st.top();
        st.pop();
    }
}