// string _ Iterator in C++
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string st = "MY Name is Ruhul Amin";
    string::iterator it;
    // for (it = st.begin(); it != st.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    // second way and reverse
    for (auto ite = st.rbegin(); ite != st.rend(); ite++)
    {
        cout << *ite;
    }
    cout << endl;
}