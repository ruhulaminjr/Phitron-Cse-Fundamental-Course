#include <bits/stdc++.h>
using namespace std;
int calcP(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '^')
        return 3;
    else
        return -1;
}
string infixToPrefix(string infix)
{
    reverse(infix.begin(), infix.end());
    stack<char> st;
    string output;
    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] >= '0' && infix[i] <= '9')
        {
            output += infix[i];
        }
        else if (infix[i] == ')')
        {
            st.push(infix[i]);
        }
        else if (infix[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                output += st.top();
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && calcP(infix[i]) <= calcP(st.top())){
                output+= st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
        while (!st.empty())
        {
            output += st.top();
            st.pop();
        }
    }
    reverse(output.begin(), output.end());
    return output;
}
int main(void)
{
    // string str = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
    string result = infixToPrefix("(A - B/C) * (A/K-L)");
    cout << result << endl;
}
/*
Convert it into Prefix Notation using Stack and Show the status of Stack and Console in all the steps

Input : A * B + C / D
Output : + * A B/ C D

Input : (A - B/C) * (A/K-L)
Output : *-A/BC-/AKL
*/
