#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s, t;
    while (cin >> s, cin >> t)
    {
        int ptrs = 0;
        int ptrt = 0;
        int lent = t.length();
        int lens = s.length();
        for (int i = 0; i < lens || i < lent; i++)
        {
            // cout<<t[ptrt]<<" || "<<s[ptrs]<<endl;
            if (t[ptrt] == s[ptrs])
            {
                ptrt++;
                ptrs++;
            }
            else
            {
                ptrt++;
            }
        }
        if (lens == ptrs)
        {
            cout << "Yes" << endl;
        }
        else
        {
            // cout<<lens<<"|| "<<ptrs<<endl;
            cout << "No" << endl;
        }
    }
}