#include <iostream>
#include <climits>
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
    cout << "Before Sort : " << endl;
    printArray(arr, size);
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"Max : "<<max<<endl;
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    cout<<"Counter Array:  ";
    for(int i=0;i<=max;i++){
        cout<<count[i]<<" ";
    }
    cout<<endl;
    for (int i = 1; i <= max; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    cout << "Presum Array:  ";
    for (int i = 0; i <= max; i++)
    {
        cout << count[i] << " ";
    }
    int sorted[size];
    for (int i = size - 1; i >= 0; i--)
    {
        count[arr[i]]--;
        int key = count[arr[i]];
        sorted[key] = arr[i];
    }
    cout<<endl;
    cout<<"Sorted Array : ";
    printArray(sorted, size);
}
// Counting Sort Algorithm Time Complexity O(n);
// Step 1 : Find The maxium of the array
// step 2 : make a counter array and count the frequency of the array element and store it on counter array counter array size maxelment + 1;
// step 3 : make a presum array of frequency array counter[i]  = counter[i-1] + counter[i];
// step 4 : traverse arr size-1 to 0 and subtract value from  counter[arr[i]]--  and store it on a key variable;
// step 5 : sotre arr[i] into k position in the final array;