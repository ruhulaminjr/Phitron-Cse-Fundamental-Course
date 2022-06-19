#include <stdio.h>
struct Batsman
{
    char name[100];
    int score;
};
void print_result(struct Batsman a)
{
    printf("Name : %s Score : %d\n", a.name, a.score);
}
void change_struct(struct Batsman *a)
{
    a->score= 101;
    // -> this sign short cut for (*a) dereferenchin operator 
}
int main(void)
{
    struct Batsman player = {"Tamim", 88};
    print_result(player);
    change_struct(&player);
    print_result(player);
}