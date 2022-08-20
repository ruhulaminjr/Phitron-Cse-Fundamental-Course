#include <iostream>
using namespace std;

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
    int sum = 0;
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && (j <= mid || j == n - 1))
            {
                sum += arr[i][j];
            }
            else if (i < mid && (j == mid || j == n - 1))
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
            else if (i > mid && (j == mid || j == 0))
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
}