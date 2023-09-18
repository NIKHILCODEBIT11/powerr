#include<stdio.h>
typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
}coe;
int main(){
    coe s1={1621,9.1,"haart"};
    printf("student name is %s \n",s1.name);
    printf("student roll:%d \n",s1.roll);
    printf("student cgpa is %f \n",s1.cgpa);
    return 0;

}