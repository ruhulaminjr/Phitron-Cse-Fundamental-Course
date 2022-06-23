#include <stdio.h>
struct Person
{
    char name[100];
    int val1;
    int val2;
};
void structure_sort(struct Person p[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i].val2 > p[j].val2)
            {
                struct Person temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    struct Person arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", arr[i].name, &arr[i].val1, &arr[i].val2);
        
    }
    structure_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d\n", arr[i].name, arr[i].val1, arr[i].val2);
    }
}
/*
Make a function named structure_sort() which takes an array of structures and the size of that array. In this function you will sort that array on the basis of val2 and you don’t need to return anything as you remember the array will be updated from where it was called.
The format of structure is given below,
struct Person
{
    char name[100];
    int val1;
    int val2;
}

*/