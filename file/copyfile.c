#include <stdio.h>


int main(void){
    FILE *inputfile = fopen("input.txt","r");
    FILE *outputfile = fopen("output.txt","w");
    if(inputfile == NULL){
        printf("No Input File Fount!\n");
        return 0;
    }
    while (1)
    {
        char ch = fgetc(inputfile);
        if(ch == EOF){
            printf("\nFile End\n");
            break;
        }
        // fprintf(outputfile,"%c",ch);
        fputc(ch,outputfile);
    }
}