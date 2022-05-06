#include<stdio.h>

int main(){

     //Calculate and output the sum of the elemts of the array...

     int a[3][4] = {
      {3, 2, 6, 8}, {5, 10, 15, 20}, {4, 8, 16, 24}

     };
     int sum = 0;
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 4; j++)
         {
             sum += a[i][j];
         }
         
     }
     printf("Sum of all the elements of the array  is : \n%d", sum);
     

}