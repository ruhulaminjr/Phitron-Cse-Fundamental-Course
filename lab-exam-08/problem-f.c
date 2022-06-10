#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char ss[100];
        scanf("%s", ss);
        if (n < 11)
        {
            printf("NO\n");
        }
        else if (n > 11)
        {
            int check = 0;
            int del = n - 11;
            for (int i = del; i >= 0; i--)
            {
                if (ss[i] == '8')
                {
                    check = 1;
                    break;
                }
            }
            if (check)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if (ss[0] == '8')
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}