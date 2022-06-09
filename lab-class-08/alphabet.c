#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    scanf("%s", a);
    int counter[26] = {0};
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        char value = a[i] - 'a';
        counter[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (counter[i] == 0)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}