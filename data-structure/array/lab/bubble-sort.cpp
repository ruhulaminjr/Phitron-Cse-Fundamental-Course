#include <bits/stdc++.h>

using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void)
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sort : ";
    printArray(arr, size);
    // bubble sor implementation
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        cout << "iteration Number : " << i + 1 << endl;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            printArray(arr, size);
        }
        cout << endl;
        if (flag == 0)
            break;
    }
    cout << "After sort : ";
    printArray(arr, size);
}