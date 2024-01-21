#include<stdio.h>

// printing sum of n numbers

int sum(int n);
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int k=sum(n);
    printf("The sum of numbers from 1 to %d : \n%d",n,k);
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}