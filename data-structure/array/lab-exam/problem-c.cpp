#include <iostream>

using namespace std;
void i_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        i_sort(arr, n);
        int first_el = arr[0];
        int idx;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == first_el)
            {
                idx = i;
            }
        }
        int ans = n - (idx + 1);
        cout << ans << endl;
        ;
    }
}
/*


*/