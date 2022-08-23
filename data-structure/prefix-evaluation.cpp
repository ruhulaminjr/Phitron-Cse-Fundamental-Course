#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;

int main(void)
{
    Stacks<int> st;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        int a, b;
        switch (str[i])
        {
        case '*':
            a = st.topValue();
            st.pop();
            b = st.topValue();
            st.pop();
            st.push(a * b);
            break;
        case '+':
            a = st.topValue();
            st.pop();
            b = st.topValue();
            st.pop();
            st.push(a + b);
            break;
        default:
            int value = stoi(str[i]);
            st.push(value);
            break;
        }
    }
    while (!st.isEmpty())
    {
        cout << "Result : " << st.topValue() << endl;
        st.pop();
    }
}