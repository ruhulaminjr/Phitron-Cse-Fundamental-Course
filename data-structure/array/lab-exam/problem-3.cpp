#include <iostream>
using namespace std;
void update_prefix(int arr[], int prearr[], int n)
{
    prearr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prearr[i] = prearr[i - 1] + arr[i];
    }
}
int main(void)
{
    int t;
    cin >> t;
    int ca = 1;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int prearr[n];
        update_prefix(arr, prearr, n);
        int result[c];
        for (int z = 0; z < c; z++)
        {
            int q;
            cin >> q;
            if (q == 1)
            {
                int i;
                cin >> i;
                result[z] = arr[i];
                arr[i] = 0;
                update_prefix(arr, prearr, n);
            }
            else if (q == 2)
            {
                int i, val;
                cin >> i >> val;
                arr[i] += val;
                result[z] = -111;
                update_prefix(arr, prearr, n);
            }
            else if (q == 3)
            {
                int i, j;
                cin >> i >> j;
                result[z] = prearr[j];
            }
        }
        cout << "Case " << ca << ":" << endl;
        for (int i = 0; i < c; i++)
        {
            if (result[i] != -111)
            {
                cout << result[i] << endl;
            }
        }
        ca++;
    }
}
// 3 2 1 8 0
// 2,4
// 5 + 6  =