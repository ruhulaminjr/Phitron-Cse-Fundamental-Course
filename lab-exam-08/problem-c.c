#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    int counter[10] = {0};
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int value = str[i] - '0';
            counter[value]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", counter[i]);
    }
    printf("\n");
}