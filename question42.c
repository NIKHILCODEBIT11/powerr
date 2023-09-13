#include<stdio.h>
int value(int n);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("value of n is %d \n",n);
    main(n);
    printf("value of n is %d \n",n);
    return 0;
}
int value(int n){
    n=n*10;
    return n;
}