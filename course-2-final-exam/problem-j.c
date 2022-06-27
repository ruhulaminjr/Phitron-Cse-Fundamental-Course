#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct family
{
    char name[20];
    char fam[20];
};
int main(void)
{
    int n;
    scanf("%d", &n);
    struct family members[n];
    struct family un;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", members[i].name, members[i].fam);
    }
    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(members[i].name, members[j].name) == 0 && strcmp(members[i].fam, members[j].fam ) == 0)
            {
                check = true;
            }
        }
    }

    if (check)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}