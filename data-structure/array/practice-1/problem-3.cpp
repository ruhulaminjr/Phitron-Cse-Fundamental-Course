#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void)
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(arr[i],arr[j]);
    }
    print_arr(arr, size);
}
/*

WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally, print them all from 0 index to the last valid index.

Sample input
Sample output
5
1  2  3  4  5
5  4  3  2  1
6
2  8  3  9  0  1
1  0  9  3  8  2


*/