#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void maxHeapify(int arr[], int n, int current)
{
    int largest = current;
    int leftChild = 2 * current + 1;
    int rightChild = 2 * current + 2;
    if (leftChild < n && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }
    if (rightChild < n && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }
    if (largest != current)
    {
        swap(arr[current], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void heapSort(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        swap(arr[i], arr[0]);
        maxHeapify(arr, i, 0);
    }
}
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Max Heapify : " << endl;
    printArr(arr, n);
    int nonLeafStart = (n / 2) - 1;
    for (int i = nonLeafStart; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
    cout << "After Max Heapify : " << endl;
    printArr(arr, n);
    cout << "After Heap Sort " << endl;
    heapSort(arr, n);
    printArr(arr, n);
}
/*
9
2 10 1 5 4 8 3 8 7
*/