#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    while (scanf("%d", &N) == 1)
    {
        if (N == 0)
            break;
        int G = 0;
        for (int i = 1; i < N; i++)
            for (int j = i + 1; j <= N; j++)
            {
                G += __gcd(i, j);
            }
        printf("%d\n", G);
    }
}