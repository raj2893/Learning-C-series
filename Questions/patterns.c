#include <stdio.h>

int main()
{
    //Square Star Pattern
    int m;
    printf("Enter the number of rows: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < m; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    // Right Triangle Star Pattern
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

  

    return 0;
}
