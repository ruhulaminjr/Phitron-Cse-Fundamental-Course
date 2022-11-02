#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        int left = -1, right = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > val)
            {
                right = arr[i];
                break;
            }
            if (arr[i] < val)
            {
                left = arr[i];
            }
        }
        if (left == -1)
        {
            cout << "X"
                 << " ";
        }
        else
        {
            cout << left << " ";
        }
        if (right == -1)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << right << endl;
        }
    }
}