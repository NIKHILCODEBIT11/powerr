#include<stdio.h>
int main(){
    int n;int marks[n];
    int *ptr;
    ptr=&marks[0];
    for(int i=0;i<n;i++){
        printf("enter the value of marks for student %d:",i+1);
        scanf("%d",marks[0]);
        ptr++;
    }
    for(int i=0;i<n;i++){
    printf("the value of marks of student %d is %d \n",i+1,marks[i]);
}   
}