#include <stdio.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int a;
    scanf("%d", &a);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    int amount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && a > 0)
        {
            amount += -arr[i];
            a--;
        }
    }
    printf("%d\n", amount);
}

/*
Once Oggy went to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Oggy if he buys their useless apparatus. Oggy can «buy» any TV sets he wants. Though he's very strong, Oggy can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Oggy find out the maximum sum of money that he can earn.
5 3
-6 0 35 -2 4
>> 8
4 2
7 0 0 -7
>> 7
*/