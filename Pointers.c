// int x = 45;
#include<stdio.h>

int main(){
    int x = 45;
    printf("The address of x is %x\n", &x);
    int *p = &x;

    // printf("The address of x is %x\n", p);
    // printf("p is pointing to the value %d\n", *p);
    int y;
    y = *p + 2;    // 45 + 2 = 47
    // printf("%d", y);
    (*p)++;
    y += *p;  // y = y + *p , y = 47 + 46 = 93
    printf("%d\n", y);
    printf("%d", *p);
}