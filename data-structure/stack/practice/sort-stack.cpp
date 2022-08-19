#include <bits/stdc++.h>
#include "../mystack.h"
using namespace std;
void putElOnStack(Stacks<int> &st, int el)
{
    if (st.isEmpty() || el < st.topValue())
    {
        st.push(el);
        return;
    }

    int topEl = st.topValue();
    st.pop();
    putElOnStack(st, el);
    st.push(topEl);
    // cout<<topEl<<endl;
}
void sortStack(Stacks<int> &st)
{
    if (st.isEmpty())
    {
        return;
    }
    int topEl = st.topValue();
    st.pop();
    sortStack(st);
    // cout << "sorting : " << topEl << endl;
    putElOnStack(st, topEl);
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
    sortStack(st);
    cout << "After Sorting  : " << endl;
    while (!st.isEmpty())
    {
        cout << st.topValue() << " ";
        st.pop();
    }
    cout << endl;
}