#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void printinfo(struct student s1);
int main(){
    struct student s1={1621,9.2,"harrryy"};
    printinfo(s1);
    s1.roll=1600; // but of i change in main function then it will change.
        printf("student roll is:%d \n",s1.roll); // to know that struct function is call by value function.
    return 0;
}
void printinfo(struct student s1){
    printf("student information:- \n");
    printf("student roll is:%d \n",s1.roll);
    printf("student name is %s \n",s1.name);
    printf("student cgpa is %f \n",s1.cgpa);
    s1.roll=1600;  // to check whether by changing value at function the value changes or not at main, just checking whether it is call by value or call of reference.
}