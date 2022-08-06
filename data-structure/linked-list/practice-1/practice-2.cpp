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
void inputMatrix(int *arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> *((arr + i * col) + j);
        }
    }
}
int main(void)
{
    int arr[3][3];
    int barr[3][3];
    inputMatrix(*arr, 3, 3);
    inputMatrix(*barr, 3, 3);
    // cout<<"Arr 1 : "<<endl;
    // print2dArray(*arr,3,3);
    // cout<<"Arr 2 : "<<endl;
    // print2dArray(*barr,3,3);
    int outarr[3][3];
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            // cout << arr[i][j] << " * " << barr[j][i] << " + ";
            sum += arr[i][j] * barr[j][i];
        }
        // cout << " = " << sum << endl;
        for (int j = 0; j < 3; j++)
        {
            outarr[i][j] = sum;
        }
    }
    print2dArray(*outarr, 3, 3);
}

/*
WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B. Now do C = A * B (multiplication). Finally display all the elements from matrix / 2D array C.
*/
/*
1 2 3
4 5 6
7 8 9
*****
2 2 2
2 2 2
1 1 1

=====
 c = a * b;

1 * 2 + 2 * 2 + 3 * 1 = 9 // c1 = [a[0][i] * b[i][0]];

*/