#include <stdio.h>
int get_max(int a, int b)
{
    return a > b ? a : b;
}
int main(void)
{
    int max = get_max(55,99);
    printf("%d\n",max);
}


// Write a function named get_max() which will take two integer values as parameters and return the maximum of them.