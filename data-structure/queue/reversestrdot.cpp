#include <bits/stdc++.h>
#include "my-queue.h"

using namespace std;
string reverseStringByDot(string str)
{

    Queue<string> q;
    for (int i = 0; i < str.length(); i++)
    {
        string newStr;
        while (i < str.length() && str[i] != '.')
        {
            newStr += str[i];
            i++;
        }
        reverse(newStr.begin(), newStr.end());
        if (i < str.length() - 1)
        {
            newStr += '.';
        }
        q.push(newStr);
    }
    string newString;
    while (q.size())
    {
        newString += q.pop();
    }
    return newString;
}
int main(void)
{
    string str;
    cin >> str;
    cout<<reverseStringByDot(str)<<endl;
}