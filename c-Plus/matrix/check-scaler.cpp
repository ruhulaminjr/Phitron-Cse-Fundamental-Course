
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    if (row != col)
    {
        cout << "No" << endl;
        return 0;
    }
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
            if (i == j)
            {
                continue;
            }
            if (arr[i][j] > 0)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    int save;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i == j){
                if (i == 0 && j == 0){
                    save = arr[i][j];
                }
                 
                 if (arr[i][j] != save)
                {
                    cout << "Not Scaler" << endl;
                    return 0;
                }
            }
          
        }
    }
    cout << "Scaler Matrix" << endl;
    cout << "save " << save << endl;
}