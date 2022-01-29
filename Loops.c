#include <stdio.h>

int main()
{
    int var = 3;
    int i = 4;
    int j = 0;

    // While loop
    printf("Below lines are printed by while loop\n");
    while (j <= var)
    {
        printf("Hi!\n");
        j++;
    }

    // For loop
     printf("Below lines are printed by for loop\n");
    for (int i = 0; i <= var; i++)
    {
        printf("Hi!\n");
    }

    // Do-While loop
     printf("Below lines are printed by do-while loop\n");
    do
    {
        printf("Hi!\n");
    } while (i <= var);

    return 0;
}
