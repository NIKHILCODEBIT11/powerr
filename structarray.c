#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ECE[100];
    ECE[0].roll=1657;
    ECE[0].cgpa=9.3;
    strcpy(ECE[0].name,"Harrt");
    printf("name=%s \n",ECE[0].name);
    printf("roll is %d \n",ECE[0].roll);
    printf("cgpa is %f \n",ECE[0].cgpa);
    struct student COE[100];
    COE[0].roll=16578;
    COE[0].cgpa=9.1;
    strcpy(COE[0].name,"putre");
    printf("name is %s",COE[0].name);
    printf("roll is %d",COE[0].roll);
    printf("cgpa is %f",COE[0].cgpa);
    struct student IT[100];
    IT[0].roll=1644;
    IT[0].cgpa=9.4;
    strcpyy(IT[0].name,"herie");
    printf("name is %s \n",)
    return 0;


}