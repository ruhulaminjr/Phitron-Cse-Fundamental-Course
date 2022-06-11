#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int zero = 0;
    int one = 1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '0')
        {
            one = 0;
            zero++;
            if (zero >= 7)
            {
                break;
            }
        }
        else if (str[i] == '1')
        {
            zero = 0;
            one++;
            if (one >= 7)
            {
                break;
            }
        }
    }
    if (one >= 7 || zero >= 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}