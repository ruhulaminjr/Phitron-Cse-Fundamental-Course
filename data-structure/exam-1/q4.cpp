#include <iostream>
using namespace std;
void printMatrix(int *arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << *((arr + col * i) + j) << " ";
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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for(int z = 0;z<row;z++){
                for(int k = j+1;k<col;k++){
                    // cout<<arr[i][j]<< " === " <<arr[z][k]<<endl;;
                    if(arr[i][j] == arr[z][k]){
                        arr[i][j] = -1;
                    }
                }
            }
        }
    }
    cout<<"Result : "<<endl;
    printMatrix(*arr, row, col);
}


/*
 WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now replace all the duplicate integers by -1 in that matrix. Finally display it.
 Sample input
Sample output
3  3
1  7  3
7  4  5
3  5  6
 1  7  3
-1  4  5
-1 -1  6
2 6
2  2  2  2  2  2
6  5  4  3  2  1

2 -1 -1 -1 -1 -1
6  5  4   3 -1  1



*/