#include<stdio.h>
//sum of first n natural numbers
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int i=1,sum=0;
    do{
       sum+=i;
       i++;
    }
    while(i<=n);
    printf("sum is %d \n",sum);
    return 0;
}