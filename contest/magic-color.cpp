#include <bits/stdc++.h>
using namespace std;

void magicColor(char str[], int n)
{
    queue<char> st;
    for (int i = 0; i < n; i++)
    {
        st.push(str[i]);
    }
    stack<char> st2;
    while (!st.empty())
    {
        if (st2.empty())
        {
            st2.push(st.front());
            st.pop();
            continue;
        }
        char a = st.front();
        char b = st2.top();
        if (a == b)
        {
            st.pop();
            st2.pop();
        }
        else if ((a == 'R' && b == 'G') || (a == 'G' && b == 'R'))
        {
            st2.pop();
            st.pop();
            st2.push('Y');
        }
        else if ((a == 'R' && b == 'B') || (a == 'B' && b == 'R'))
        {
            st2.pop();
            st.pop();
            st2.push('P');
        }
        else if ((a == 'B' && b == 'G') || (a == 'G' && b == 'B'))
        {
            st2.pop();
            st.pop();
            st2.push('C');
        }
        else
        {
            st.pop();
            st2.push(a);
        }
    }
    stack<char> st3;
    while (!st2.empty())
    {
        if (st3.empty())
        {
            st3.push(st2.top());
            st2.pop();
            continue;
        }
        char a = st2.top();
        char b = st3.top();
        if (a == b)
        {
            st2.pop();
            st3.pop();
        }
        else
        {
            st3.push(a);
            st2.pop();
        }
    }
    while (!st3.empty())
    {
        char el = st3.top();
        cout << el;
        st3.pop();
    }
    cout << endl;
}
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char str[n];
        cin >> str;
        magicColor(str, n);
    }
}