#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000];
    scanf("%s", str);
    char s[] = "heidi";
    int ind = 0;
    int len = strlen(str);
    int slen = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == s[ind])
        {
            ind++;
        }
    }
    if (ind >= slen)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}