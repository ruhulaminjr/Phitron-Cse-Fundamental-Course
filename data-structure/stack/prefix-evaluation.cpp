#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;
int prefixEvaluation(string str)
{
    Stacks<int> st;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            st.push(str[i] - '0');
        }
        else
        {
            int a = st.topValue();
            st.pop();
            int b = st.topValue();
            st.pop();
            switch (str[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                break;
            }
        }
    }
    return st.topValue();
}
int main(void)
{
    string str;
    cin >> str;
    int result = prefixEvaluation(str);
    cout << "Result : " << result << endl;
}