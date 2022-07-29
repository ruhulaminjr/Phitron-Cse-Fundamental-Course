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
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 3 == 0)
        {
            arr[i] = -1;
        }
    }
    print_arr(arr, size);
}
/*

WAP that will take n positive integers into an array A. Now find all the integers that are divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.

Sample input
Sample output
8
7 8 1 3 2 6 4 3
7 8 1 -1 2 -1 4 -1


3
3 2 1
-1 2 1




*/