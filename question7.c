#include<stdio.h>
/*write a program to give grades to a student
marks<30 is c
30<=marks<70 is B
70<=marks<90 is A
90<=marks<=100 is A+
*/
int main(){
    int marks;
    printf("enter marks :");
    scanf("%d",&marks);
    if(marks<30&&marks>=0){
        printf("C \n");
    }
    else if(marks<70&&marks>=30){
        printf("B \n");
    }
    else if(marks<90&&marks>=70){
        printf("A \n");
    }
    else if(marks<=100&&marks>=90){
        printf("A+");
    }
    else{
        printf("invalid marks");
    }
    return 0;

}