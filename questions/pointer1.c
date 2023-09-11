#include<stdio.h>
int main(){
    // address
    int age=22;
    int *ptr=&age;
    // both print the same address
    printf("%u \n",&age);
    printf("%u",ptr);
    return 0;
}