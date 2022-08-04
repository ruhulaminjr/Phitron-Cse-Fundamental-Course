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
            if(i == j){
                arr[i][j] = 1;
            }else{
                arr[i][j] = 0;
            }
           
        }
    }
    printArray(*arr, n, n);
}