#include<stdio.h>
// print reverse of a table for a number n.
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int i=10;
    do{
        int t;
        --i;
        t=n*i;
        printf("%d \n",t);
    }
    while(i>=1);
    return 0;
    /* here we put ++i ahead so table like of 2 starts from 
       2*2 and ends at 2*11
    */   
}