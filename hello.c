#include <stdio.h>

/* Another function */
void another_function(int i)
{
    printf("Another function(%d).\n", i);
}

/* Yet another function */
void yet_another_function()
{
    printf("YET ANOTHER FUNCTION.\n");
}

/* Main function */
int main()
{
    printf("HELLO WORLD!\n");
    another_function(1);
    yet_another_function();
}
