#include <bits/stdc++.h>
using namespace std;
string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void)
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, k;
        cin >> n >> k;
        cout << "Case " << i << ":" << '\n';
        string sub = letters.substr(0, n);
        string start = sub;
        for (int j = 0; j < k; j++)
        {
            cout << sub << endl;
            next_permutation(sub.begin(), sub.end());
            if (sub == start)
                break;
        }
    }
}