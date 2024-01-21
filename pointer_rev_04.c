#include<stdio.h>
int main(){
    int age=21;
    int *ptr=&age;
    int _age='&';
    int *_ptr=&_age;
    printf("Difference=%u\n",ptr-_ptr);
    printf("comparision=%u\n",ptr==_ptr);
    return 0;
}