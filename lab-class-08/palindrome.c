// Check a word is a palindrome
#include <stdio.h>
#include <string.h>
char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main(void)
{
    char a[100], b[100];
    scanf("%s", a);
    strcpy(b, a);
    strrev(b);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] != b[i])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}