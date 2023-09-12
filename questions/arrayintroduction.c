#include<stdio.h>
int main(){
    int marks[3];
    printf("enter maths mark:");
    scanf("%d",&marks[0]);
    printf("enter science mark:");
    scanf("%d",&marks[1]);
    printf("enter english mark:");
    scanf("%d",&marks[2]);
    printf("marks in maths=%d,marks in science=%d,marks in english=%d",marks[0],marks[1],marks[2]);
    return 0;

}
