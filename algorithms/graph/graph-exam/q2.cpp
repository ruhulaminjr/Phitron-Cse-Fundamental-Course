#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int idx;
            cin >> idx;
            matrix[i][j] = idx;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][i] != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > 1)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}

//-----------------------------------------------------------------------
