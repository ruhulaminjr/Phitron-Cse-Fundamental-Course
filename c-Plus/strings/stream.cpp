#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    string str = "Ab BA CD DC EF FE";
    stringstream strm;
    strm<<str;
    string s;
    while (strm >> s)
    {
        cout << s << endl;
    }
}