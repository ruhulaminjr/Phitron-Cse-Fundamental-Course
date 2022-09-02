#include <bits/stdc++.h>

using namespace std;
int i = 1;
void printarray(int arr[], int j, int n)
{
    for (int i = j; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int binary_search(int arr[], int el, int lb, int hb)
{
    if (lb <= hb)
    {
        // calculating mid
        int mid = (lb + hb) / 2;
        cout << "Step " << i << " : ";
        cout << "Mid : " << mid << "Mid El " << arr[mid] << endl;
        cout << "Searching In ";

        printarray(arr, lb, hb);
        i++;
        if (el == arr[mid])
        {

            return mid;
        }

        else if (el < arr[mid])
        {
            // search on left side;
            return binary_search(arr, el, lb, mid - 1);
        }
        else
            return binary_search(arr, el, mid + 1, hb); // search on right side
    }
    else
    {
        return -1;
    }
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
    cout << "Enter Element To Search : ";
    int el;
    cin >> el;
    int idx = binary_search(arr, el, 0, size - 1);
    if (idx == -1)
    {
        cout << "Element Not Found!" << endl;
    }
    else
    {
        cout << "El Index : " << idx << " El Position : " << idx + 1 << endl;
    }
    return 0;
}
// step 1 : array = 1 2 9 11 17 24 26 31 32 45 and mid =
// step 2 :

// 11