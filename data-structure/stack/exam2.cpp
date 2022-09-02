#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;

int main(void)
{
    Stacks<char> st;
    string str1 = "CSE";
    string str2;
    for (int i = 0; i < str1.length(); i++)
    {
        st.push(str1[i]);
    }
    while (st.size())
    {
        str2 += st.pop();
    }
    cout << str2 << endl;
}