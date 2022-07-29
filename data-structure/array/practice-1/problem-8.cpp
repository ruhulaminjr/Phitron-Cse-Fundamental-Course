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
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int z = i + 1; z < size; z++)
                {
                    arr[z - 1] = arr[i];
                }
                size--;
            }
        }
    }
    print_arr(arr, size);
}
/*
WAP that will take n integers into an array A. Now remove all duplicate numbers from that array. Finally, print all elements from that array.
Sample input
Sample output
8
2 8 1 3 2 6 4 3
2 8 1 3 6 4
3
3 3 3
3


4
6 7 8 9
6 7 8 9


*/