#include<stdio.h>
// write a program to print the address of a variable.use this address to get the value of the variable.
int main(){
    int b;
    printf("enter b:");
    scanf("%d",&b);
    int *a=&b;
    printf("address of b is %u \n",a);
    printf("the address of b is %u \n",&b);
    printf("the value of b is %d \n",*a);
    printf("the value of b is %d \n",*(&b));
    printf("the value of b is %d \n",*a);
    printf("the value of a is %u",a);
    return 0;
}
