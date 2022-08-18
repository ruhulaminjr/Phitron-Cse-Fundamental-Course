#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;

void reverseSentence(string str)
{
    Stacks<string> st;

    for (int i = 0; i < str.length(); i++)
    {
        string word = "";
        while (i < str.length() && str[i] != ' ')
        {
            word += str[i];
            i++;
        }
        st.push(word);
    }
    while (!st.isEmpty())
    {
        cout << st.topValue() << " ";
        st.pop();
    }
    cout << endl;
}
int main(void)
{
    string str = "My Name Is Ruhul Amin";
    reverseSentence(str);
}