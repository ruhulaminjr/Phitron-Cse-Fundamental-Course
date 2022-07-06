#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    // int *arr = (int*)malloc(n * sizeof(int));
    // in c malloc function used to create dynamic memory allocation in heap memeory
    // we can also use callco to set all the array element value to 0
    int *arr = new int[n]{0};
    // in c++ new keyword create a dynamic memory allocation
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}