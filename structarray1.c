#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={1634,9.1,"harry"};
    struct student s2={1622,9.2,"rajatri"};
    struct student s3={1611,9.2,"gyani"};
    printf("the name of s1 is %s \n",s1.name);
    printf("roll of s2 is %d \n",s2.roll);
    printf("cgpa of s3 is %f \n",s3.cgpa);
    return 0;

}