#include <iostream>
#include <stack>

using namespace std;

void pushAtIndex(stack<int> st, int index, int ele)
{
    stack<int> temp;
    if (index <= 0 || index >= st.size())
        return;
    while (st.size() != index - 1)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(ele);
    while (temp.size())
    {
        st.push(temp.top());
        temp.pop();
    }

    while (st.size())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    pushAtIndex(st, 7, 3);
}