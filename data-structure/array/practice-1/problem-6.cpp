#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int size1, size2;
    cin >> size1;
    int arr1[size1];

    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    int check = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr2[j] == arr1[i])
            {
                check = 1;
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
    if (check == 0)
    {
        cout << "Not Found" << endl;
    }
}
/*
WAP that will take n integers into an array A and m positive integers into array B. Now find the intersection (set operation) of arrays A and B.

Sample input
Sample output
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2
1 2 6 3
3
1 2 3
2
4 5
Empty set


*/