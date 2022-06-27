#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct Cricketer
{
    char name[100];
    int score;
    int age;
};
int main(void)
{
    struct Cricketer batsman;
    struct Cricketer best;
    printf("Enter Batsman Details: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %d", batsman.name, &batsman.score, &batsman.age);
        printf("Name : %s Score : %d Age: %d \n", batsman.name, batsman.score, batsman.age);
        if (batsman.score > best.score)
        {
            best = batsman;
        }
    }
    printf("Best Batsman is Name : %s Score : %d \n", best.name, best.score);
}