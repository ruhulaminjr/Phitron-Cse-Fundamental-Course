#include <stdio.h>

int main(void)
{
    int n;
    char marks[1000];
    char g;
    scanf("%d %s %c", &n, marks, &g);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (g == 'b')
        {
            if (i % 2 == 0)
            {
                sum += marks[i] - '0';
            }
        }
        else if (g == 'g')
        {
            if (i % 2 != 0)
            {
                sum += marks[i] - '0';
            }
        }
    }
    printf("%d\n", sum);
}