#include <iostream>

using namespace std;
void printArray(int *arr, int row, int col)
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
    cout << endl;
    // printArray(*arr,n,n);
    cout << "Major diagonal: ";
    int row = 0, col = 0;
    while (row < n)
    {
        cout << arr[row][col] << " ";
        row++;
        col++;
    }
    cout << endl;
    cout << "Minor diagonal: ";
    int row2 = 0, col2 = n - 1;
    while (row2 < n)
    {
        cout << arr[row2][col2] << " ";
        row2++;
        col2--;
    }
    cout << endl;
}
/*
WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the elements of its two diagonals. Reference: http://en.wikipedia.org/wiki/Main_diagonal

5
1 2 3 4 5
5 4 3 2 1
2 2 2 2 2
6 7 8 9 0
1 9 3 7 4
*/