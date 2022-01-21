#include <stdio.h>

int main()
{
    // Addition(+), Subtraction(-), Division(/), Multiplication(*) and Modulus(%)
    int a= 4, b = 7;

     int c = b + a;
     printf("The sum of a and b is %d\n\n", c);

     int d = b - a;
     printf("The subtraction of a and b is %d\n\n", d);

     float e = (float)b/(float)a;
      printf("The division of b and a is %f\n\n", e);

     int f = b * a;
       printf("The multiplication of a and b is %d\n\n", f);

     int g = b % a;
     printf("The modulus of b and a is %d\n\n", g);
    return 0;
}
