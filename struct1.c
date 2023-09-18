#include<stdio.h>
#include<string.h> // to use strcpy.

//user defined
struct student{
    int roll;      // properties
    float cgpa;     // properties
    char name[100];      // properties
};
int main(){
    struct student s1;
    // we use . or dot property to access roll property of s1. 
    s1.roll=1545;
    // we use . or dot property to access roll property of s1. 
    s1.cgpa=9.4;
     // we use . or dot property to access roll property of s1. 
   // s1.name="harry" // This will show error because at above i defined string as an array and as i know when string is defined as an array then the value of string can't be changed, it surely can be copied and all other functions of string can be done. further but can be done if string is defined as pointer.
                        // so firstly i will copy by using strcpy 
    strcpy(s1.name,"harry");
    // in s1.
    printf("student name=%s \n",s1.name);
    printf("student roll=%s \n",s1.roll);
    printf("student cgpa=%s \n",s1.cgpa);
    return 0;
}