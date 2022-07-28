#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    int minidx = 0, maxidx = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxidx = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            minidx = i;
        }
    }
    cout << "Max: " << max << " Index: " << maxidx << endl;
    cout << "Min: " << min << " Index: " << minidx << endl;
}
/*
WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position.

Sample input
Sample output
5
1  2  3  4  5
Max: 5, Index: 4
Min: 1, Index: 0
6
2  8  3  9  0  1
Max: 9, Index: 3
Min: 0, Index: 4


*/