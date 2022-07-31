#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int counter[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            int value = arr[i];
            counter[value]++;
        }
        int max = counter[0];
        int maxi = 0;
        for (int i = 0; i < 1001; i++)
        {
            if (counter[i] > max)
            {
                max = counter[i];
                maxi = i;
            }
        }
        int  count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] != maxi){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
/*
1 2 3 3 3 4 5
7 - 3 = 4
*/