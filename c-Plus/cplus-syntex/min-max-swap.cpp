#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    // min(),max(),swap()
    int arr[10] = {12, 34, 2, 34, 2, 21, 12, 121, 3, 1};
    // this programmaer remvoe the all value and fill this array this min value
    for (int i = 0; i < 9; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            int mn = min(arr[i], arr[j]);
            swap(arr[i], mn);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " " << endl;
    }
    int a = 50, b = 30, c = 99;
    int mx = max(a, max(b, c));
    cout << mx << endl;
}