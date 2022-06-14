#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d\n", &n);
        int arr[n];
        int counter[200001] = {0};
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            int value = arr[i];
            counter[value]++;
            if (counter[value] >= 3)
            {
                ans = value;
            }
        }

        printf("%d\n", ans);
    }
}