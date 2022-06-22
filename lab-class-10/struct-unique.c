#include <stdio.h>
#include <stdbool.h>
struct Bowler
{
    char name[100];
    int id;
    int wicked;
    int total;
};
void print_bowler(struct Bowler b)
{
    printf("Name: %s id: %d wicked: %d total: %d\n", b.name, b.id, b.wicked, b.total);
}
struct Bowler inputBowler(struct Bowler *b)
{
    scanf("%s %d %d", b->name, &b->id, &b->wicked);
    b->total = b->wicked;
    return *b;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    struct Bowler arr[n];
    struct Bowler unique[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        arr[i] = inputBowler(&arr[i]);
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
    for (int i = 0; i < k; i++)
    {
        print_bowler(unique[i]);
    }
}