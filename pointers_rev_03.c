#include<stdio.h>
/*
square----------> Call by value
Cube------------> Call by reference
*/
int square(int n);
int cube(int *n){
    *n=(*n)*(*n)*(*n);
    return *n;
}
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int *ptr;
    ptr=&n;
    printf("The square of %d is %d\n",n,square(n));
    printf("The cube of %d is %d\n",n,cube(&n));
    return 0;
}
int square(int n){
    n=n*n;
    return n;
}