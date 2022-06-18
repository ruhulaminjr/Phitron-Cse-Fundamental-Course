
#include <stdio.h>

int make_average(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int average = sum / n;
    return average;
}

int main(void)
{
    int num[] = {5, 10, 15};
    printf("%d \n", make_average(num, 3));
}

/*
Make a function named make_average() which will take an array of integers and the size of that array and return the average of those values.
*/