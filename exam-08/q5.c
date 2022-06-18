#include <stdio.h>
#include <stdbool.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
bool check_array(int arr[], int n)
{
    sort(arr, n);
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            check = false;
            printf("%d > > %d\n", arr[i], i + 1);
        }
    }
    if (check)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(void)
{
    int arr[] = {1, 2, 5, 4, 3};
    printf("%i\n", check_array(arr, 5));
}

/*
Make a function named check_array() which will take an array of integers and the size of that array N. It will return a boolean type whether this array has all values from 1 to N or not.
*/