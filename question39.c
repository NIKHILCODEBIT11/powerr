#include<stdio.h>
int series(int n);
int main(){
    int n;
    do{
    printf("enter n:");
    scanf("%d",&n);
    printf("the %dth element of fibonacci series is %d \n",n,series(n));
    }
    while(1);
    return 0;

}
int series(int n){
    if(n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    return series(n-1)+series(n-2);

}