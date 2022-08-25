#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Stacks<int> st;
    Stacks<int> minSt;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            minSt.push(min);
            min = arr[i];
        }
        st.push(arr[i]);
    }
    while (!st.isEmpty())
    {
        if (minSt.topValue() != st.topValue())
        {
            st.pop();
            cout << minSt.topValue() << " ";
        }
        else
        {
            cout << minSt.topValue() << " ";
            minSt.pop();
            st.pop();
            
        }
    }
    cout << endl;
}