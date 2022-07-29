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
    // Implement Insertion
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        cout << "i : " << i << " key : " << key << endl;
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            printArray(arr, size);
            j--;
        }
        arr[j + 1] = key;
        cout << "After Swap : " << endl;
        printArray(arr, size);
    }
    cout << "After Sort : ";
    printArray(arr, size);
}