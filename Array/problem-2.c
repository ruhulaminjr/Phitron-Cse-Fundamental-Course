/*
Write a C code which takes an array of size N as input and do the following:
Print the values of even indexes. Index of that array starts from 0.

For example:
Input:
5
5 12 3 4 9
Output:
5 3 9

*/
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}