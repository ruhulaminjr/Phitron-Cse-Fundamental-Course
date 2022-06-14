#include <stdio.h>
int get_min(int a, int b)
{
    return a < b ? a : b;
}
int main(void)
{
    int min = get_min(55, 66);
    printf("%d\n", min);
}
/*
Write a function named get_min() which will take two integer values as parameters and return the minimum of them
*/