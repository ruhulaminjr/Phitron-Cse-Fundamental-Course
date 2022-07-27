#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void)
{
    int n;
    cin >> n;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given Array: ";
    print_arr(arr, n);
    int pos;
    cout << "Enter Position To Delete : ";
    cin >> pos;
    if (pos < 0 || pos >= n)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        if (pos == n - 1)
            n--;
        else
        {
            for (int i = pos + 1; i < n; i++)
            {
                arr[i - 1] = arr[i];
            }
            n--;
        }
    }
    cout << "Array After Deletion: ";
    print_arr(arr, n);
}