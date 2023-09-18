#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={1621,9.1,"harrry"};
    struct student *ptr;
    ptr=&s1;
    printf("the name is %s",(*ptr).name); // here (*ptr).name not *ptr.name or *(ptr.name) or *(ptr).name
    return 0;

}