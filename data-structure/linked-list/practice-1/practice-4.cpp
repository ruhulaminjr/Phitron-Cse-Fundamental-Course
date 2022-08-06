#include <iostream>

using namespace std;

int main(void)
{
    int size;
    cin >> size;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int mid = size / 2;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0)
            {
                sum += arr[i][j];
            }
            else if (i == size - 1)
            {
                sum += arr[i][j];
            }
            else if (i == mid && j == mid)
            {
                sum += arr[mid][mid];
                // cout << arr[mid][mid] << endl;
            }
            else
            {
                if (i == j || j == size - 1 - i)
                {
                    sum += arr[i][j];
                }
            }
        }
    }
    cout << sum << endl;
}

/*
 WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers at first row, last row and two diagonals without overlap. Please see the sample input-output.

Sample input
Sample output
5
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1
// 52
7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
//23


*/