#include<stdio.h>
//nested if-else
int main (){
    int number;
    printf("enter number : \n");
    scanf("%d",&number);
    if(number>=0){
        printf("number is positive. \n");
        if(number%2==0){
            printf("number is even. \n");
        }
        else{
            printf("number is odd. \n");
        }
    }
    else{
        printf("number is negative, \n");
    }
    return 0;
}