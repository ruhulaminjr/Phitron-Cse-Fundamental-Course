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
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
            {
                sum += arr[i][j];
                
            }
            else if(i %2 != 0)
            {
                sum += arr[i][j];
                // cout << arr[i][j] << endl;
            }
        }
    }
    cout<<sum<<endl;
}
/*
WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate the sum of the integers based on the following position pattern (consider only the boxed position during the sum). Please see the input-output.

Sample input
Sample output
5
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1
65
7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
33


*/