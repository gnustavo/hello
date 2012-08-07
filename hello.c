#include <stdio.h>

/* Another function */
void another_function(int i)
{
    printf("Another function(%d).\n", i);
}

/* Yet another function */
void yet_another_function()
{
    printf("Yet another function.\n");
}

/* Main function */
int main()
{
    printf("Hello world!\n");
    another_function(1);
    yet_another_function();
    exit(0);
}
