#include<stdio.h>
int *larger(int *x, int*y);

int main(){
    // int arr[4] = {12, 22, 32, 42};
    // int *p = arr;

    // printf("%d\n%x", *p, p);
    // p++;
        // printf("%d\n%x", *p, p);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\n", *(p + i) );
    // }
    // p += 2; // p = p + 2
    // printf("%d", *p);
    int a = 15, b = 40;
    int  *p;
    p = larger(&a, &b);
    printf("%d is larger", *p);

    
    return 0;

}
int *larger(int *x, int *y){
    if(*x > *y){
    return x;}
    else{
        return y;
    }
}