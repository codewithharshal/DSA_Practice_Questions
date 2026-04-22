#include <iostream>
#include <stack>
using namespace std;

void PushAtBottom(stack<int> &st, int element)
{
    if (st.size() == 0)
    {
        st.push(element);
        return;
    }
    int x = st.top();
    st.pop();
    PushAtBottom(st, element);
    st.push(x);
}

void reverse(stack<int> &st)
{
    if (st.empty())
        return;
    int x = st.top();
    st.pop();
    reverse(st);
    PushAtBottom(st, x);
}

int main()
{
    stack<int> st;
    st.pop();
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // PushAtBottom(st, 50);
    // reverse(st);
    // while (st.size())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
}