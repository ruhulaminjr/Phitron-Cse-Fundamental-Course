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
    cout << "Before Swap : " << endl;
    printArray(*arr, row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0, k = col - 1; j < k; j++, k--)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }
    cout << "After Swap : " << endl;
    printArray(*arr, row, col);
}