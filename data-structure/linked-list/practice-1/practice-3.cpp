#include <iostream>

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
    int max = arr[0][0];
    int ridx = 0, cidx = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                ridx = i;
                cidx = j;
            }
        }
    }
    cout << "Max : " << max << endl;
    cout << "Location : "
         << "[" << ridx << "]"
         << "[" << cidx << "]" << endl;
}