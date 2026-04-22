#include <iostream>
#include <stack>

using namespace std;

void reverseRec(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    reverseRec(st);
    st.push(x);
}
void reverseRec2(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    reverseRec2(st);
    cout << x << " ";
    st.push(x);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    reverseRec2(st);
}