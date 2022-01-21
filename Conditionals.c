#include<stdio.h>

int main() {
    int salary;
    printf("Enter your salary:\n");
    scanf("%d", &salary);

    if (salary > 5000 && salary < 10000)
    {
        printf("The bonus given to you is 1000rs");
    }
    else if(salary >= 10000 && salary < 20000) {
        printf("The bonus given to you is 2000rs");
    }
    else if(salary >= 20000 && salary < 30000) {
        printf("The bonus given to you is 3000rs");
    }
    else if(salary >= 30000) {
        printf("The bonus given to you is 4000rs");
    }
    else{
        printf("The bonus given to you is 500rs");
    }
    return 0;
}

  