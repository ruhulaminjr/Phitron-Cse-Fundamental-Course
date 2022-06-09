#include <stdio.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
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
    int n, x, y, arr[200] = {0};
    scanf("%d", &n);
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &y);
    for (int i = x; i < x + y; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = x + y;
    int count = 0;
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    if(count == n){
        printf("I become the guy.\n");
    }else{
        printf("Oh, my keyboard!\n");
    }
}