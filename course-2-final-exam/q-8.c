#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
Take an integer N as input and make a pattern for that number. Sample is given below:
For example:
Input 1:
5
Output 1:
*
**
***
****
*****
****
***
**
*

Input 2:
7
Output 2:
*
**
***
****
*****
******
*******
******
*****
****
***
**
*

*/