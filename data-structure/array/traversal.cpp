#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
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
    print_arr(arr,n);
}