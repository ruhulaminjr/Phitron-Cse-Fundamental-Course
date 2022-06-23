#include <stdio.h>
struct Person
{
    char name[100];
    int val;
};
int get_min(struct Person p[], int n)
{
    int min = p[0].val;
    for (int i = 0; i < n; i++)
    {
        if (p[i].val < min)
        {
            min = p[i].val;
        }
    }
    return min;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    struct Person arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", arr[i].name, &arr[i].val);
    }
    printf("Min Value : %d\n", get_min(arr, n));
}
/*
Make a function named get_min() which takes an array of structures and the size of that array. In this function you will find the minimum val from the array of structures and return that value. The format of structure is given below,
struct Person
{
        char name[100];
        int val;
    }

*/