#include<stdio.h>
int sum_n(int n);
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    printf("The sum of %d natural number is %d",n,sum_n(n));
    return 0;
}
int sum_n(int n){
    if(n==1){
        return 1;
    }
    int sum=n+sum_n(n-1);
    return sum;
}