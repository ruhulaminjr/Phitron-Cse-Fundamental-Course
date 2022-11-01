#include <bits/stdc++.h>

using namespace std;
int find(int arr[], int s, int e, int chk)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (chk == arr[mid])
        {
            return mid;
        }
        else if (chk < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main(void)
{
    int n, q;
    int count = 1;
    while (cin >> n >> q)
    {
        getchar();
        if (n == 0 && q == 0)
            break;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            getchar();
        }
        sort(arr, arr + n);
        cout << "CASE# " << count << ":" << endl;
        count++;
        for (int i = 0; i < q; i++)
        {
            int chk;
            cin >> chk;
            getchar();
            int s = 0, e = n - 1;
            int f = find(arr, s, e, chk);

            if (f == -1)
            {
                cout << chk << " not found" << endl;
            }
            else
            {
                while (f >= 0 && arr[f] == arr[f - 1])
                {
                    f--;
                }
                cout << chk << " found at " << f + 1 << endl;
            }
        }
    }
}