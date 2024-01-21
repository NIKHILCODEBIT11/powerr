#include<stdio.h>

//printing facorial

int factorial(int n);
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    printf("The value of factorial of %d is %d\n",n,factorial(n));
    return 0;
}
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    int k=factorial(n-1)*n;
    return k;
}