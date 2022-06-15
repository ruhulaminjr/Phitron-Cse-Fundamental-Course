#include <stdio.h>
void insert(int *arr, int n, int pos, int el)
{
    int i;
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = el;
}
int main(void)
{
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int el, pos;
    printf("Enter Element : ");
    scanf("%d", &el);
    printf("Enter Position : ");
    scanf("%d", &pos);
    insert(arr, n, pos, el);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}