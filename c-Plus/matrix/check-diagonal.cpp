#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int row, col;
    cin>>row>>col;
    if (row != col)
    {
        cout << "NO" << endl;
        return 0;
    }
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i][j] > 0)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}