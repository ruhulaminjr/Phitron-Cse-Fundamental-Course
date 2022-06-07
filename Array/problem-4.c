/*
Write a C code which takes an array of size N as input and do the following:
Make reverse of that array and print the differences between every value of the original and reversed array.

For example:
Input:
5
1 4 6 2 7
Output:
6 2 0 2 6

*/

#include <stdio.h>
#include <stdlib.h>
int *reverse(int arr[], int n)
{
    int *revArr = (int *)malloc(n * sizeof(int));
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        revArr[j] = arr[i];
    }
    return revArr;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *revA = reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        int diff = revA[i] - arr[i];
        printf("%d ", abs(diff));
    }

    printf("\n");
}