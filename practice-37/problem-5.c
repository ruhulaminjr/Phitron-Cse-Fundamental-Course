#include <stdio.h>

int main(void)
{
    FILE *inputfile = fopen("input.txt", "r");
    if (inputfile == NULL)
    {
        perror("Input File Not Found!");
        return 0;
    }
    int count = 0;
    while (1)
    {
        char ch = fgetc(inputfile);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
        if (ch != ' ')
        {
            count++;
        }
    };
    printf("\ncharacter found : %d\n", count);
    fclose(inputfile);
}