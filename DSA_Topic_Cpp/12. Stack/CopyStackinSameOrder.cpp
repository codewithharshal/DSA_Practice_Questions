#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> temp;
    stack<int> temp2;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while (st.size())
    {
        temp2.push(st.top());
        st.pop();
    }
    while (temp2.size())
    {
        temp.push(temp2.top());
        temp2.pop();
    }

    while (temp.size())
    {
        cout << temp.top() << endl;
        temp.pop();
    }
}
