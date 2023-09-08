#include<stdio.h>
// write a program to print the average of 3 numbers.
int main(){
    int a,b,c;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b \n");
    scanf("%d",&b);
    printf("enter  \n");
    scanf("%d",&c);
    int y=(a+b+c);
    float x=y/3.0;
    printf("average is %f \n",x);
    return 0;
}