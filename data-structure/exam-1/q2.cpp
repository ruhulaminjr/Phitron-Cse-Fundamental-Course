

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
    int n1, n2;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int max1 = findMax(arr1, n1);
    int max2 = findMax(arr2, n2);
    int myMax = max1 > max2 ? max1 : max2;
    int freq1[myMax + 1] = {0};
    for (int i = 0; i < n1; i++)
    {
        int value = arr1[i];
        freq1[value]++;
    }
    int freq2[myMax + 1] = {0};
    for (int i = 0; i < n2; i++)
    {
        int value = arr2[i];
        freq2[value]++;
    }
    int maxUnique = n1 > n2 ? n1 : n2;
    int unique[maxUnique];
    int z = 0;
    for (int i = 0; i <= myMax; i++)
    {
        if (freq1[i] > 0 && freq2[i] == 0)
        {
            unique[z] = i;
            z++;
        }
    }
    for (int i = 0; i < z; i++)
    {
        cout << unique[i] << " ";
    }
    cout << endl;
}



/*
WAP that will take n integers into an array A and m positive integers into array B. Now find the difference (set operation) of array A and B or (A-B).

Sample input
Sample output
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2
7 8 5 4

3
1 2 3
2
4 5
1 2 3


*/