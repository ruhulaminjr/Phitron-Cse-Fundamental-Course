#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int counter[10] = {0};
        for (int i = 0; i < n; i++)
        {
            int value = arr[i];
            counter[value]++;
        }
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (counter[i] >= 3)
            {
                ans = i;
            }
        }
        if (ans)
        {

            printf("%d\n", ans);
        }
        else
        {
            printf("-1\n");
        }
    }
}