#include <stdio.h>
struct Person
{
    char name[100];
    int val;
};
int get_max(struct Person p[], int n)
{
    int max = p[0].val;
    for (int i = 0; i < n; i++)
    {
        if (p[i].val > max)
        {
            max = p[i].val;
        }
    }
    return max;
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
    printf("Max Value : %d\n", get_max(arr, n));
}

/*
Make a function named get_max() which takes an array of structures and the size of that array. In this function you will find the maximum val from the array of structures and return that value. The format of structure is given below,
struct Person
{
        char name[100];
        int val;
    }

*/