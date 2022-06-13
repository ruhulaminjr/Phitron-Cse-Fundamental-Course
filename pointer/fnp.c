#include <stdio.h>
void change(int *ptr)
{
    *(ptr) = 201;
    *(ptr + 1) = 300;
    *(ptr + 2) = 362436;
}
int main(void)
{
    int arr[3] = {1, 2, 3};
    change(arr);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
}