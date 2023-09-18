#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={1263,9.2,"harry"};
    struct student *ptr;
    ptr=&s1;
    printf("name using pointer:%s \n",(*ptr).name);
    printf("name ---->%s \n",ptr->name);
}