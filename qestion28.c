#include<stdio.h>
#include<math.h>
// use library functions to calculate the square of a number given by user.
// we will be using power function.
int power(int a,int b);
int main(){
    int a,b;
    printf("enter a: \n");
    scanf("%d",&a);
    printf("enter b: \n");
    scanf("%d",&b);
    int r=power(a,b);
    printf("power is %d \n",r);
}
int power(int x,int y){
     int power=pow(x,y);
     return pow(x,y);
}