#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int matrix[n][n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int idx;
            cin >> idx;
            matrix[i][j] = idx;
            if (idx == 1)
                count++;
        }
    }
    cout << count / 2 << endl;
}