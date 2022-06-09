#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char a[] = "Tetrahedron";  // 4
    char b[] = "Cube";         // 6
    char c[] = "Octahedron";   // 8
    char d[] = "Dodecahedron"; // 12
    char e[] = "Icosahedron";  // 20
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        char str[20];
        scanf("%s", str);
        if (strcmp(str, a) == 0)
        {
            sum += 4;
        }
        else if (strcmp(str, b) == 0)
        {
            sum += 6;
        }
        else if (strcmp(str, c) == 0)
        {
            sum += 8;
        }
        else if (strcmp(str, d) == 0)
        {
            sum += 12;
        }
        else if (strcmp(str, e) == 0)
        {
            sum += 20;
        }
    }
    printf("%d\n", sum);
}