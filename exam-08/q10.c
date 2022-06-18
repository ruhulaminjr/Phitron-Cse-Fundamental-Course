#include <stdio.h>
void change_Array(int arr[], int n, int revarr[])
{
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        revarr[i] = arr[j];
    }
}
int main(void)
{
    int arr[5] = {7, 17, 37, 49, 55};
    int revArr[5];
    change_Array(arr, 5, revArr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", revArr[i]);
    }
    printf("\n");
}
/*
Make a function named change_array() which will take an integer array and size of that array. After that you will reverse that array and put that in a new array and print it in the main() function. You know that you can’t return an array normally, so you need to make that array in the main() function and pass that through the parameter.
*/