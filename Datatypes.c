#include <stdio.h>

int main()
{
    /* int    float      char     double*/
    int a;

    printf("Please enter the number:\n");
    scanf("%d", &a);

    printf("The number you entered is %d.", a);

    float b;

    printf("Please enter the number:\n");
    scanf("%f", &b);
    printf("The number you entered is %f.", b);

    return 0;
}
