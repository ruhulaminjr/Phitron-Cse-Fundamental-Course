#include <stdio.h>
struct Person
{
    char name[100];
    int val;
};
int main(void)
{
    FILE *inputfile = fopen("input.txt", "r");
    FILE *outputfile = fopen("outputfile.txt", "a");
    if (inputfile == NULL)
    {
        perror("INPUT FILE NOT FOUND!");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    struct Person arr[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(inputfile, "%s %d", arr[i].name, &arr[i].val);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i].val <= 0)
        {
            fprintf(outputfile, "Invalid Input\n");
        }
        else
        {
            fprintf(outputfile, "Name: %s Value: %d \n", arr[i].name, arr[i].val);
        }
    }
}

/*
In this problem you will take the size of an array and an array of structures from the file and save that information in the file. The format of structure is given below,
struct Person
{
        char name[100];
        int val;
    }

*/