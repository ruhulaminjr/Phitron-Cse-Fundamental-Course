#include <iostream>

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
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int mid = n / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             if (i == 0 && (j <= mid || j == n - 1))
            {
                sum += arr[i][j];
            }
             else if (i == mid)
            {
                sum += arr[i][j];
            }
            else if (i == n - 1 && (j >= mid || j == 0))
            {
                sum += arr[i][j];
            }
            else if ((j == mid || j == n - 1) && i < mid)
            {

                sum += arr[i][j];
            }
            else if ((j == 0 || j == mid) && i > mid)
            {

                sum += arr[i][j];
            }
        }
    }
    cout<<endl;
    cout << sum << endl;
}

/*
WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate the sum of the integers based on the following position pattern (consider only the boxed position during the sum). Please see the input-output.
5
1 2 3 4 5//
2 3 4 1 6
3 4 9 6 7//
4 2 6 7 8
5 4 3 2 1//
----------
0 0 = 1;
0 1 = 2;
0 2 = 3;
1 2 = 4;
*/