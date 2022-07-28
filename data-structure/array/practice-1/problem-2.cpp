#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int size;
    cin >> size;
    int arr[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
    }
    cout << sum << endl;
}

/*
WAP that will take n integer numbers into an array, and then sum up all the integers in the even indexed Position.

Sample input
Sample output
5
1  2  3  4  5
9
6
2  8  3  9  0  1
5


*/