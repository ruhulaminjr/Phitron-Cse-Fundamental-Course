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
            // printArray(arr, size);
            j--;
        }
        arr[j + 1] = key;
        cout << "After Swap : " << endl;
        printArray(arr, size);
    }
    cout << "After Sort : ";
    printArray(arr, size);
}
//step 1: assum array into two part first part is sorted portion and second part is unsorted portion
//step 2: set a key variable to array ith element unsorted portion and i start equal to 1;
//step 2: set j variable to i-1 and assumed is sorted portion
//step 3: Now run a loop until arr[j] is greater than key and j greater than equal to 0;
//step 4: if arr[j] > key then swap array j+1 and arr[j] and minus 1 from j;
//step 5: after conditon faild set arr[j+1] to = key variable;