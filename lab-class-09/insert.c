#include <stdio.h>
void insert(int *arr, int n, int pos, int el)
{
    for (int i = n - 2; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = el;
}

int main(void)
{
    int arr[7] = {10, 20, 30, 40, 50, 60};
    int pos, el;
    scanf("%d %d", &pos, &el);
    insert(arr, 7, pos, el);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}