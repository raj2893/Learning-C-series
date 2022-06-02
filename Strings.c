#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char name[20];
    // int age;
    printf("Enter your name: \n");
    // scanf("%s %d", name, &age);
    gets(name);
    fputs(name, stdout);
    printf(" is a funny man.");
    // printf("Hi, %s! Your age is %d", name, age);
    // strlen()
    printf("\nThe length of your name is %d", strlen(name));
    getch();
    return 0;
}
