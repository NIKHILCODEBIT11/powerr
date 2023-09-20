#include<stdio.h>
// Make a program to input STUDENT information from a user and enter it to a file.
int main(){
    FILE*fptr;
    fptr=fopen("student.txt","w"); // there was no such file named student.txt i just write it as "w" because i have to write and also will automatically create an empty file named student.txt
    char name[100];
    int age;
    float cgpa;
    printf("enter name:");
    scanf("%s",name); // i didn't used &name because name is already a string which is a pointer and so address is present.
    printf("enter age:");
    scanf("%d",&age);
    printf("enter cgpa:");
    scanf("%f",&cgpa);
    fprintf(fptr,"student name=%s \n",name);
    fprintf(fptr,"student age=%d \n",age);
    fprintf(fptr,"student's cgpa=%f",cgpa);
    fclose(fptr);
    return 0;
}