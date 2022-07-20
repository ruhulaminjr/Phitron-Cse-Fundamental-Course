#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int reqcol;
    cin >> reqcol;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][reqcol] << ",";
    }
    cout << endl;
}