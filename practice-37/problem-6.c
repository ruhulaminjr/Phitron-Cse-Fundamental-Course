#include <stdio.h>

int main(void)
{
    FILE *inputfile = fopen("inarr.txt", "r");
    FILE *outputfile = fopen("outsum.txt", "w");
    if (inputfile == NULL)
    {
        perror("Input File Not Found!\n");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        fscanf(inputfile, "%d", &arr[i]);
        sum += arr[i];
    }
    fprintf(outputfile, "Arr Sum = %d\n", sum);
}

/*
Write a C program to take an integer array of size N as input and calculate the sum of all integers. You need to do this using files. That means, you will take input from a file, and give output into a file without using command prompt / terminal.

*/