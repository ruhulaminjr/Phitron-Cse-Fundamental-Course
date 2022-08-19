#include <iostream>
#include "../mystack.h"
using namespace std;
void deleteMid(Stacks<int> &st, int mid)
{
    int count = 0;
    Stacks<int> tempSt;
    while (count < mid)
    {
        int temEl = st.topValue();
        st.pop();
        tempSt.push(temEl);
        count++;
    }
    st.pop();
    while (!tempSt.isEmpty())
    {
        st.push(tempSt.topValue());
        tempSt.pop();
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
    int mid = n / 2;
    deleteMid(st, mid);
    cout << "After Deleting Mid : " << endl;
    while (!st.isEmpty())
    {
        cout << st.pop() << " ";
    }
    cout << endl;
}