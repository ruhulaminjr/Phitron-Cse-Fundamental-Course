#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    int row = 4, col = 4;
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
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }
}