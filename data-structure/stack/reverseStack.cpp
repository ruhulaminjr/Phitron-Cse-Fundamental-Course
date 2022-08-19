#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;
void insertAtBottom(Stacks<int> &st, int topEl)
{
    if (st.isEmpty())
    {
        st.push(topEl);
        return;
    }
    int element = st.topValue();
    st.pop();
    insertAtBottom(st, topEl);
    // cout<<element<<endl;
    st.push(element);
}
void reverseStack(Stacks<int> &st)
{
    if (st.isEmpty())
    {
        return;
    }
    int topEl = st.topValue();
    st.pop();
    reverseStack(st);
    // cout << topEl << endl;
    insertAtBottom(st, topEl);
}
int main(void)
{
    Stacks<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseStack(st);
    // cout << "Normal Stack : " << endl;
    // while (!st.isEmpty())
    // {
    //     cout << st.pop() << endl;
    // }
}