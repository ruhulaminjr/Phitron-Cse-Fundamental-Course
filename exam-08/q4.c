

#include <stdio.h>

void bar()
{
    printf("bar\n");
}
void foo()
{
    bar();
    printf("foo\n");
}
int main(void)
{
    foo();
}


/*
Make a function named foo() which prints “foo\n” and a function named bar() which prints “bar\n”. Call function foo() in the main() function and call function bar() in the foo() function after printing. What will be the output?


*/