#include <iostream>
#include "../mystack.h"
using namespace std;
void deleteMid(Stacks<int> &st, int mid)
{
    static int current = 0;
    if (mid == current)
    {
        st.pop();
        return;
    }
    int TopEl = st.topValue();
    st.pop();
    current++;
    deleteMid(st, mid);
    st.push(TopEl);
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
    int mid = (n / 2);
    deleteMid(st, mid);
    cout << "After Deleting Mid : " << endl;
    while (!st.isEmpty())
    {
        cout << st.pop() << " ";
    }
    cout << endl;
}