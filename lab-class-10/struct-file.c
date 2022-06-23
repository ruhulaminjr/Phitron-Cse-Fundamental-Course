#include <stdio.h>
#include <stdbool.h>
struct Bowler
{
    char name[100];
    int id;
    int wicked;
    int total;
};
void print_bowler(FILE *output, struct Bowler b)
{
    fprintf(output, "Name: %s id: %d wicked: %d total: %d\n", b.name, b.id, b.wicked, b.total);
}
struct Bowler inputBowler(FILE *input, struct Bowler *b)
{
    fscanf(input, "%s %d %d", b->name, &b->id, &b->wicked);
    b->total = b->wicked;
    return *b;
}
int main(void)
{
    FILE *inputfile = fopen("input.txt", "r");
    FILE *outputfile = fopen("output.txt", "w");
    if (inputfile == NULL)
    {
        perror("File Not Found!\n");
        return 0;
    }
    int n;
    fscanf(inputfile, "%d", &n);
    struct Bowler arr[n];
    struct Bowler unique[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        arr[i] = inputBowler(inputfile, &arr[i]);
        for (int j = 0; j < k; j++)
        {
            if (arr[i].id == unique[j].id)
            {
                unique[j].total += arr[i].wicked;
                found = true;
            }
        }
        if (!found)
        {
            unique[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (unique[i].total < unique[j].total)
            {
                struct Bowler temp = unique[i];
                unique[i] = unique[j];
                unique[j] = temp;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        print_bowler(outputfile, unique[i]);
    }
}