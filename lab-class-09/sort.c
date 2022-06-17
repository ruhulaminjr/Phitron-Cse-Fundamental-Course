#include <stdio.h>
void sort(int *arr, int n)
{
    for (int pos = 0; pos < n - 1; pos++)
    {
        for (int check = pos + 1; check < n; check++)
        {
            if (arr[pos] > arr[check])
            {
                // printf("%d ==== %d\n", arr[pos], arr[check]);
                int temp = arr[pos];
                arr[pos] = arr[check];
                arr[check] = temp;
                // printf("%d >> %d\n",arr[pos],arr[check]);
            }

            // for (int i = 0; i < 6; i++)
            // {
            //     printf("%d ", arr[i]);
            // }
            // printf("\n");
        }
    }
}
int main(void)
{
    int arr[6] = {12, 2, 66, 1, 34, 99};
    sort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}