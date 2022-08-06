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
/*
3.	WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum element with index location from that matrix.
Sample input
Sample output
3 3
1 2 3
4 5 6
2 9 2
Max: 9
Location: [2][1]
2 3
9 8 7
3 4 5
Max: 9
Location: [0][0]


*/