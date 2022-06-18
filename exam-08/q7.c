#include <stdio.h>
int count_swaps(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                count++;
            }
        }
    }
    return count;
}

int main(void)
{
    int arr[] = {1, 2, 3, 5, 4};
    int sc = count_swaps(arr,5);
    printf("%d\n",sc);
}

/*
Make a function named count_swaps() which will take an array of integers and the size of that array. You need to tell how many swaps you need while implementing the selection sort that is shown in the module video and return that number of swaps from that function.
*/