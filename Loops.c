#include <stdio.h>

int main()
{
    int var = 3;
    int i = 4;
    int j = 0;
    while (j <= var)
    {
        printf("Hi!\n");
        j++;
    }
    for (int i = 0; i <= var; i++)
    {
        printf("Hi!\n");
    }
    do
    {
        printf("Hi!\n");
    } while (i <= var);

    return 0;
}
