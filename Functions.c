#include<stdio.h>

//Function declaration
int sum(int a, int b);

int main(){

 // Declaring the values that needs to be added
    int a=3, b = 5;
    
// Calling the function
    int result = sum(a, b);

    // Printing the result
    printf("%d", result);
    return 0;
}

// Telling the function what to do
int sum(int a, int b){
    int answer;
    answer = a + b;

    return answer;
}
