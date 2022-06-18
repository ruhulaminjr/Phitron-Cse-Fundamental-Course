#include <stdio.h>
#include <stdbool.h>
bool odd_even1(int a)
{
    // Has return + Has parameter
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void odd_even2(int a)
{
    // No return +Has parameter
    if (a % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
bool odd_even3()
{
    // Has return + No parameter
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void odd_even4()
{
    // No return + No parameter
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
int main(void)
{
    odd_even1(5);
    odd_even2(56);
    odd_even3();
    odd_even4();
}

/*

Make a function named odd_even() which takes an integer value and tells whether this value is even or odd. You need to do it in 4 ways:
i) Has return + Has parameter
ii) No return + Has parameter
iii) Has return + No parameter
iv) No return + No parameter
*/