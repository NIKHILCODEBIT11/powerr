#include<stdio.h>
int main(){
    int n;
    int *ptr=&n;
    printf("enter n:");
    scanf("%d",&n);
    printf("the address of n is %u \n",ptr);
    printf("the address of n is %u \n",&n);
    printf("the address of pointer n is %u \n",ptr);
    ptr++;
    printf("the address of pointer is %u \n",ptr);
    printf("the value of n is %d",*ptr);
    return 0;
}