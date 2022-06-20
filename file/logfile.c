#include <stdio.h>

int main(void)
{
    FILE *logfile = fopen("logfile.txt", "a");
    FILE *infile = fopen("infile.txt", "r");
    if (infile == NULL)
    {
        fprintf(logfile, "File Not found at 15:51:11 \n");
        return 0;
    }
    fclose(logfile);
    fclose(infile);
}