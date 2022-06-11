#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int rule = 0;
    if (islower(str[0]))
    {
        int upper = 1;
        for (int i = 1; i < len; i++)
        {
            if (islower(str[i]))
            {
                upper = 0;
            }
        }
        if (upper)
        {
            str[0] = str[0] - 32;
            for (int i = 1; i < len; i++)
            {
                str[i] = str[i] + 32;
            }
        }
        printf("%s\n", str);
    }
    else
    {
        int upper = 1;
        for (int i = 0; i < len; i++)
        {
            if (islower(str[i]))
            {
                upper = 0;
            }
        }
        if (upper)
        {
            for (int i = 0; i < len; i++)
            {
                str[i] = str[i] + 32;
            }
        }
        printf("%s\n", str);
    }
}