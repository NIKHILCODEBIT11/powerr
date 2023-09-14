#include<stdio.h>
int main(){
    int n;
    int *ptr=&n;
    printf("enter n:");
    scanf("%d",&n);
    printf("the address of pinter n is %u \n",ptr);
    ptr++;
    printf("the address of pointer is %u \n",ptr);
    return 0;
}