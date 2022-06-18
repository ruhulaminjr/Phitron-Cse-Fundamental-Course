
#include <stdio.h>
float make_sum(float a, float b)
{
    return a + b;
}
int main(void)
{
    float sum = make_sum(56.21, 37.9);
    printf("%f\n", sum);
}

// Make a function named make_sum() which will take two floating values as parameters and return their sum