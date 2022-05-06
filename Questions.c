#include<stdio.h>

void swap(int a, int b);
int max(int a, int b);

int main(){

// Swap the values of two variables
int x = 20, y =25;

// Calling swap function by value
printf("Values before swap x = %d and y = %d", x, y);
swap(x, y);

int r, t;
printf("\nPlease enter any two numbers: ");
scanf("%d %d", &r, &t);

swap(r, t);
max(r, t);



}
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nThe values after swap x = %d and y = %d", a, b);
}

int max(int a, int b){
    if(a > b){
        printf("\nThe greater number out of the two numbers entered is %d", a);
    }
    else if(a < b){
        printf("\nThe greater number out of the two numbers entered is %d", b);
    }
    else{
        printf("\nBoth the numbers are same.");
    }
    return 0;
}


