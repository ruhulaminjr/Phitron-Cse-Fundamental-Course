#include <bits/stdc++.h>

using namespace std;
void print2dArray(int *arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << *((arr + i * col) + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sqrt(n);
    int outarr[size][size];
    int row = 0;
    int col = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % size == 0 && i != 0)
        {
            row++;
            col = 0;
        }

        outarr[row][col] = arr[i];
        // cout << "Row : " << row << " Col : " << col << endl;
        col++;
    }
    print2dArray(*outarr, size, size);
}
