#include <stdio.h>

int main(void)
{
    FILE *inputfile = fopen("inarr.txt", "r");
    FILE *outputfile = fopen("outsum.txt", "a");
    if (inputfile == NULL)
    {
        perror("Input File Not Found!\n");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    int arr[n];
    int x = 1;
    while (x <= n)
    {
        int t;
        int sum = 0;
        fscanf(inputfile, "%d", &t);
        for (int i = 0; i < t; i++)
        {
            fscanf(inputfile, "%d", &arr[i]);
            sum += arr[i];
        }
        fprintf(outputfile, "Case %d: = %d\n", x, sum);
        x++;
    }
}

/*
Write a C program to take an integer array of size N as input and calculate the sum of all integers. You need to do this using files. That means, you will take input from a file, and give output into a file without using command prompt / terminal.

*/