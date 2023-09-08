#include<stdio.h>
/*using if-else to know adult or not,
#FIRSTUSEOFIF-ELSE
*/   
int main(){
    int age;
    printf("enter age :");
    scanf("%d",&age);
    if(age>=18){
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n"); 
    }
    else{
        printf("not adult \n");
    }
          printf("THANK YOU");
    return 0;
}