#include<stdio.h>
// print reverse of a table for a number n.
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int i=10;
    do{
        int t;
        t=n*i;
        printf("%d \n",t);
        i--;
    }
    while(i>=1);
    return 0;
}