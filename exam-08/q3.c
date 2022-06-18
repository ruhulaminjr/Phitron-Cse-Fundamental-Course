#include <stdio.h>


void count_zero(char binary[])
{
    int i = 0;
    int zero = 0;
    while (binary[i] != '\0')
    {
        if (binary[i] == '0')
        {
            zero++;
        }
        i++;
    }
    printf("%d\n", zero);
}



int main(void)
{
    count_zero("01010101");
}

/*
Make a function named count_zero() which will take a binary string (Binary string is a string which is consist of only 0 and 1) as parameter and count how many 0’s are there in that string
*/