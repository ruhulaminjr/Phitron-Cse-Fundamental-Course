#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int z = 1;
    while (t--)
    {
        string blank;
        getline(cin, blank);
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int value[c];
        for (int v = 0; v < c; v++)
        {
            int i, j;
            cin >> i >> j;
            i--;
            j--;
            int min = arr[i];
            for (i = i; i <= j; i++)
            {
                if (min > arr[i])
                {
                    min = arr[i];
                }
            }
            value[v] = min;
        }
        cout << "Case " << z << ":" << endl;
        for (int i = 0; i < c; i++)
        {
            cout << value[i] << endl;
        }
        z++;
    }
}