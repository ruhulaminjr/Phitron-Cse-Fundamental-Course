#include <stdio.h>

int main(void)
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 42)
        {
            break;
        }
        printf("%d\n", n);
    }
}

/*
Take integer value as input and output that value until you get 42. Input will be less than 100


Example
Input:
1
2
88
42
99

Output:
1
2
88
*/