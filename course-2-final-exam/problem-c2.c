#include <stdio.h>
void insert(int arr[], int n, int j)
{
    for (int i = n - 1; i > j; i--)
    {
        arr[i] = arr[i - 1];
    }
}
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            int last = arr[n - 1];
            insert(arr, n, i);
            arr[i] = last;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}