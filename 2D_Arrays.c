#include<stdio.h>

int main(){

     int a[2][3] = {
         {1, 2, 3}, {4, 5, 6}
     };
     printf("Element 3 in 2nd row is %d\n", a[1][2]);
    a[1][2] = 12;
    printf("Element 3 in 2nd row is %d\n", a[1][2]);
    
    printf("Please enter the elements of 2D Array: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("The elements of 2D array are:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("\n");
        
    }
    


    return 0;

}