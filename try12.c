#include<stdio.h>
int main(){
    int age;char _age;
    printf("enter age 1 :");
    scanf("%d",&age);
    printf("enter age 2:");
    scanf("%f",&_age);
    int *ptr=&age;
    char *ptr2=&_age;
    printf("address of age is %u \n",ptr);
    printf("address of _age is %u \n",ptr2);
    printf("the difference between %u and %u is %u \n",ptr,ptr2,ptr-ptr2);
    ptr=&_age;
    // the difference doesn't come for value but comes for data typr, if we put one int and other char pointer that difference would be 
    printf("comparision=%u",ptr==ptr2);

    // here output 1 means true that both pointers are same.
    return 0;
}