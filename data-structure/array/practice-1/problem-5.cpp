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
    int el;
    cin >> el;
    int check = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == el)
        {
            if (check == 0)
            {
                cout << "Found at index position :" << i;
            }
            else
            {
                cout << ", " << i;
            }

            check = 1;
        }
    }
    cout << endl;
    if (check == 0)
        cout << "Not Found" << endl;
}
/*
WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.

Sample input
Sample output
8
7 8 1 3 2 6 4 3
3
FOUND at index position: 3, 7
8
7 8 1 3 2 6 4 3
5
NOT FOUND


*/