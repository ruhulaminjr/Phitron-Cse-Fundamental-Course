#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;
int prefixEvaluate(string expr)
{
    Stacks<int> st;
    for (int i = expr.length(); i >= 0; i--)
    {
        if (expr[i] >= '0' && expr[i] <= '9')
        {
            int val = expr[i] - '0';
            st.push(val);
        }
        else
        {
            if (!st.isEmpty())
            {
                int a = st.topValue();
                st.pop();
                int b = st.topValue();
                st.pop();
                switch (expr[i])
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
    }
    return st.topValue();
}
int main(void)
{
    string expr;
    cin >> expr;
    cout << prefixEvaluate(expr) << endl;
}