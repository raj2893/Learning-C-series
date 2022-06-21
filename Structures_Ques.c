#include <stdio.h>

struct clg_stud
{
    char name[50];
    long int enroll;
    float cgpa;
};

void info(struct clg_stud s);

int main()
{
    int n;
    printf("Enter the number of students: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct clg_stud i;
        printf("Enter name: \n");
        scanf("%s", i.name);

        printf("Please enter your enrollment number: \n");
        scanf("%ld", &i.enroll);

        printf("Please enter your CGPA: \n");
        scanf("%f", &i.cgpa);

        info(i);
    }
    return 0;
}

void info(struct clg_stud s)
{

    printf("\n\nInformation\n\n");
    printf("Name: %s\n", s.name);
    printf("Enrollment no. is : %ld\n", s.enroll);
    printf("Your CGPA is : %.2f\n", s.cgpa);

    if (s.cgpa > 8.00)
    {
        printf("Your performance is good!\n");
    }
    else if (s.cgpa > 6.50)
    {
        printf("Your performance is average!\n");
    }
    else
    {
        printf("Thodi padhai karle bhai!\n");
    }
}
