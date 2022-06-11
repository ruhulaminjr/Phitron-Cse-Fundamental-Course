#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int len = strlen(str);
    int one = 0;
    int zero = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'z')
        {
            zero++;
        }
        if (str[i] == 'n')
        {
            one++;
        }
    }
    if (one)
    {
        for (int i = 0; i < one; i++)
        {
            printf("1 ");
        }
    }
    if (zero)
    {
        for (int i = 0; i < zero; i++)
        {
            printf("0 ");
        }
    }
    printf("\n");
}
