#include <stdio.h>
void remove(int *arr, int n, int pos)
{
    
}
int main(void)
{
    int arr[6] = {5, 10, 13, 15, 20, 25};
    int pos;
    scanf("%d ", &pos);
    remove(arr, 6, pos);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("%d \n");
}