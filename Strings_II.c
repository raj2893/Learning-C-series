#include<stdio.h>
#include<stdlib.h>

int main(){
    // atoi
    char str[5] = "20";
    int x = atoi(str);
    printf("We have converted the string succesfully : %d\n", x);

    char newstr[10] = "12Hii11";
    x = atoi(newstr);
    printf("We are testing if the actual string will convert succesfully or not : %d\n", x);

    //atof
    double y = atof(str);
    printf("We have converted the string succesfully : %.2f\n", y);

    // Array + Strings
    char *str_array[3] = {
        "Hello", 
        "World"
    };
    printf("Please print the strings:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", str_array[i]);
    }
    
    return 0;


}