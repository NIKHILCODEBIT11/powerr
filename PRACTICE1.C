#include<stdio.h>
// write a program to check if a number is divisible by 2 or not?
int main(){
    int a;
    printf("enter a \n");
    scanf("%d",&a);
    int x=a%2;
    printf("%d",x==0);
    return 0;
}