#include <bits/stdc++.h>
using namespace std;
int findMax(int *arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxEl = findMax(arr, n);
    int freq[maxEl + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        freq[value]++;
    }
    for (int i = 0; i <= maxEl; i++)
    {
        if (freq[i] > 0)
        {
            cout << i << " => " << freq[i] << endl;
        }
    }
}

/*
WAP that will take n integers into an array. Now find out the number of occurrences for each of the unique numbers. Each line of the output will be a unique number that exists in the array and its frequency. You can print them in any order.

Sample input
Sample output
8
2 8 1 3 2 6 4 3
1 => 1
2 => 2
3 => 2
4 => 1
6 => 1
8 => 1
4
2 2 10 2
2 => 3
10 => 1


*/