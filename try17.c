#include<stdio.h>
int main(){
    int m,n=8;
    printf("Enter the number : \n");
    scanf("%d",&m);
    if(m==n){
        printf("Yes m=n.\n");
        printf("Moving forward.\n");
    }
    else
        printf("No m is not eual to n.\n");
    
    return 0;
}