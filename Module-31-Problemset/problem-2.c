#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1001];
    fgets(str, 1000, stdin);
    int len = strlen(str);
    str[len] = '\0';
    int counter[26] = {0};
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int value = (int)str[i] - 97;
            counter[value]++;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (counter[i] > 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
}