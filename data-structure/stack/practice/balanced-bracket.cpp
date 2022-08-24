#include <bits/stdc++.h>
#include "../mystack.h"

using namespace std;
bool checkBalancedBracket(string str)
{
    Stacks<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char current = str[i];
        if (st.isEmpty())
        {
            st.push(current);
        }
        else if (st.topValue() == '(' && str[i] == ')' || st.topValue() == '[' && str[i] == ']' || st.topValue() == '{' && str[i] == '}')
        {
            st.pop();
        }
        else
        {
            st.push(current);
        }
    }
    if (st.isEmpty())
    {
        return true;
    }
    else
        return false;
}
int main(void)
{

    string str;
    cin >> str;
    string check = checkBalancedBracket(str) ? "Yes" : "No";
    cout << check << endl;
}