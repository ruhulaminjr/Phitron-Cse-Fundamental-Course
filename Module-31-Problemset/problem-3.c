#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char str[100];
    scanf("%s", str);
    str[n] = '\0';
    int len = strlen(str);
    int counter[100] = {0};
    for (int i = 0; i < len; i++)
    {

        int value = (int)tolower(str[i]) - 97;
        counter[value]++;
    }
    bool check = true;
    for (int i = 0; i < 26; i++)
    {
        if (counter[i] <= 0)
        {
            check = false;
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