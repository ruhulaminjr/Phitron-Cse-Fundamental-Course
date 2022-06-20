#include <stdio.h>
int main(void)
{
    FILE *inputfile = fopen("input.txt", "r");
    FILE *outputfile = fopen("output.txt", "w");
    if (inputfile == NULL)
    {
        fprintf(outputfile, "No Input file found\n");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(inputfile, "%d", &a);
        sum += a;
    }
    fprintf(outputfile, "Sum -> %d\n", sum);
    fclose(inputfile);
    fclose(outputfile);
}