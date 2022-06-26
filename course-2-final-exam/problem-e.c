#include <stdio.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, n);
        int min = arr[n - 1] - arr[n - 2];
        for (int i = n - 1; i > 0; i--)
        {
            int minvalue = arr[i] - arr[i - 1];
            if (minvalue < min)
            {
                min = minvalue;
            }
        }
        printf("%d\n", min);
    }
}
/*
2 1 3 2 4 3
1 2 2 3 3 4
= 1
= 0
= 0
= 1
ans : 0

*/
/*
There are nn athletes in front of Jack. Athletes are numbered from 11 to nn from left to right. Jack knows the strength of each athlete — the athlete number ii has the strength s_is
i
​
 .

Jack want to split all athletes into two teams. Each team must have at least one athlete, and each athlete must be exactly in one team.

Jack want the strongest athlete from the first team to differ as little as possible from the weakest athlete from the second team. Formally, Jack want to split the athletes into two teams AA and BB so that the value |\max(A) - \min(B)|∣max(A)−min(B)∣ is as small as possible, where \max(A)max(A) is the maximum strength of an athlete from team AA, and \min(B)min(B) is the minimum strength of an athlete from team BB.

For example, if n=5n=5 and the strength of the athletes is s=[3, 1, 2, 6, 4]s=[3,1,2,6,4], then one of the possible split into teams is:

first team: A = [1, 2, 4]A=[1,2,4],
second team: B = [3, 6]B=[3,6].
In this case, the value |\max(A) - \min(B)|∣max(A)−min(B)∣ will be equal to |4-3|=1∣4−3∣=1. This example illustrates one of the ways of optimal split into two teams.

Print the minimum value |\max(A) - \min(B)|∣max(A)−min(B)∣.
*/