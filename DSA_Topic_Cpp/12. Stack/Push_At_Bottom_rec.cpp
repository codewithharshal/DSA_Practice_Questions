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

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    PushAtBottom(st, 50);
    while (st.size())
    {
        cout << st.top() << endl;
        st.pop();
    }
}