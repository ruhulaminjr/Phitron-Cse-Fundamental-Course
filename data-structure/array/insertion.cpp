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
    int pos, el;
    cout << "Enter Position : ";
    cin >> pos;
    cout << "Enter Element : ";
    cin >> el;
    if (pos < 0 || pos > n)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        // for (int i = n - 1; i >= pos; i--)
        // {
        //     arr[i + 1] = arr[i];
        // }
        // arr[pos] = el;
        arr[n] = arr[pos];
        arr[pos] = el;
    }
    cout << "Array After Insertion: ";
    print_arr(arr, n + 1);
}