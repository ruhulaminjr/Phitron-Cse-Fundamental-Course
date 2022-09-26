#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<int, string> M;
    // unordered_map<int,string> M;
    M[3] = "Ruhul";
    M[2] = ".";
    M[4] = "Amin";
    M[1] = "MD";
    M.insert(make_pair(5, "Jr"));
    for (auto el : M)
    {
        cout << el.first << " | " << el.second << endl;
    }
    cout << endl;
}