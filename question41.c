#include<stdio.h>
// write a program to print the value of a variable i by using pointer to pointer type of variable.
int main(){
    int i,*ptr,**ptr2ptr;
    ptr=&i;
    ptr2ptr=&ptr;

    printf("enter i:");
    scanf("%d",&i);
    printf("the value of i is %d \n",i);
     printf("the value of i is %d \n",**ptr2ptr);
     return 0;

}