#include<stdio.h>

int main(){

     int exam_score[10]; // We have created an array of size 10
     float percentage[10] = {87.32, 72.77, 88.92, 57.87, 77.65, 95.76, 78.77, 88.67, 93.41, 83.52};
     printf("The 3rd value of the float array is:\n %.2f\n", percentage[2]);


printf("Please enter your exam score one by one: ");
    for (int i = 0; i < 10; i++)
    {
        /* code */
          
          scanf("%d", &exam_score[i]);
    }
    
    printf("The elements of array are:\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf(" %d ", exam_score[i]);
    }
    

}