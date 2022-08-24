#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;
void reverseStack(Stacks<int> &st)
{
    Stacks<int> temp;
    while (!st.isEmpty())
    {
        temp.push(st.pop());
    }
    while (!temp.isEmpty())
    {
        st.push(temp.pop());
    }
}
int main(void)
{
    Stacks<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    reverseStack(st);
    while (!st.isEmpty())
    {
        cout << st.pop() << " ";
    }
    cout << endl;
}