#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while (st.size())
    {
        temp.push(st.top());
        st.pop();
    }

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