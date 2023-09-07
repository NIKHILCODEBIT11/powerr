#include<stdio.h>
// write a program to check if a number is odd or even ?
int main(){
    int a;
    printf("enter a \n");
/*
even --->1
odd --->0
*/
    scanf("%d",&a);
    int x=a%2;
    printf("%d",x==0);
    return 0;
}