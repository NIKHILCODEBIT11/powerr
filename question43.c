#include<stdio.h>
// write a program to accept marks of 5 students in an arrayand print them to the screen.
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
    printf("enter marks of student %d \n", i +1);
    scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
        printf("the value of marks for student %d is %d \n",i+1,marks[i]);
    }
    return 0;
}