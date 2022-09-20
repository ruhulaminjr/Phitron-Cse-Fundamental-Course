#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;
int precedenceCalc(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
        return -1;
}
int prefixEvaluation(string str)
{
    Stacks<int> st;
    int j = 1;
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
        stack<int> q;
        while (!st.isEmpty())
        {
            cout << "Step : " << j << " | Stack : " << st.topValue() << endl;
            q.push(st.topValue());
            st.pop();
        }
        while (!q.empty())
        {
            st.push(q.top());
            q.pop();
        }
        cout << endl;
        j++;
    }
    return st.topValue();
}
string infixToPrefix(string str)
{
    reverse(str.begin(), str.end());
    // cout<<str<<endl;
    string result;
    Stacks<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'Z')
        {
            result += str[i];
        }
        else if (str[i] == ')')
        {
            st.push(str[i]);
        }
        else if (str[i] == '(')
        {
            while (!st.isEmpty() && st.topValue() != ')')
            {
                result += st.pop();
            }
            if (!st.isEmpty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.isEmpty() && precedenceCalc(st.topValue()) >= precedenceCalc(str[i]))
            {
                result += st.pop();
            }
            st.push(str[i]);
        }
        // cout << "Prefix step : " << i << " : " << result << endl;
    }
    reverse(result.begin(), result.end());
    return result;
}
int main(void)
{
    string infixStr = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
    // cout << infixToPrefix(infixStr) << endl;
    cout << prefixEvaluation(infixToPrefix(infixStr)) << endl;
}

// step 1 : reverse to infix string
// step 2 : if str[i] ')' opening bracket in reverse
// then push the character in stack;
// step 3 : if str[i] '(' bracket in reverse str then pop() the stack
// until stack topvalue ')' opening bracket found;
// step 4 : if str[i] >= '0' or 'a' and <= '9' or 'z' then store it on a string

// step 5 : check precendeance of str[i] if [+,1] = 1 [/,*] = 2 [^ power] = 3 other value will be -1
// pop the stack and join the value result str until st.top() value preceneance  >=  str[i] precendeance

// step 6 : pop the stack until stacks gets empty and join stack value in result str;

// step 7 : reverse the result str;

/*
Input : A * B + C / D
Output : + * A B/ C D

Input : (A - B/C) * (A/K-L)
Output : *-A/BC-/AKL

*/