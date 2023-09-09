#include<stdio.h>
// print the numbers from 0 to n if n is given by user.
int main(){
    int number;
    printf("enter number :");
    scanf("%d",&number);
    for(int i=0;i<=number;++i){
        printf("%d \n",i);
    }
    return 0;
}