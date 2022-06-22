#include <stdio.h>
struct Batsman
{
    char name[100];
    int id;
    int score;
    int total;
};
void inputBatsman(struct Batsman *bat)
{
    scanf("%s %d %d", bat->name, &bat->id, &bat->score);
    // (*bat).total = 0;
    // bat->.name is equivalent to (*bat).name
}
void print_struct(struct Batsman bat)
{
    printf("Name: %s id: %d score: %d Total: %d\n", bat.name, bat.id, bat.score, bat.total);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    struct Batsman arr[n];
    for (int i = 0; i < n; i++)
    {
        inputBatsman(&arr[i]);
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j].id == arr[i].id)
            {
                sum += arr[j].score;
            }
        }
        arr[i].total = arr[i].score + sum;
    }
    for (int i = 0; i < n; i++)
    {
        print_struct(arr[i]);
    }
}