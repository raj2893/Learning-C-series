#include <stdio.h>

int main()
{
    int var = 3;
    int i = 4;
    int j = 0;

    // While loop
    while (j <= var)
    {
        printf("Hi!\n");
        j++;
    }

    // For loop
    for (int i = 0; i <= var; i++)
    {
        printf("Hi!\n");
    }

    // Do-While loop
    do
    {
        printf("Hi!\n");
    } while (i <= var);

    return 0;
}
