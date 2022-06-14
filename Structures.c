#include <stdio.h>
/*struct name {
        int var;
        char var[size];
        float
        double
    };
    */


// struct human
// {
//     int age;
//     char name[20];
//     float weight;
// };
typedef struct
{
    int age;
    char name[20];
    float weight;
} human;
int main()
{
    human p1;
    human p2;

    p1.age = 19;
    p1.weight = 72.2;
    sprintf(p1.name, "Raj Patel");

    // p2.age = 18;
    // p2.weight = 73;
    sprintf(p2.name, "Pratham Gandhi");

    printf("Human 1\nAge- %d, Weight - %f, Name - %s\n", p1.age, p1.weight, p1.name);
    

    p2 = p1;
    printf("Human 2\nAge- %d, Weight - %f, Name - %s", p2.age, p2.weight, p2.name);


    return 0;
}