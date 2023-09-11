#include<stdio.h>
// factorial of n.
int factorial(int n);
int main(){
    int n;
    printf("enter n: \n");
    scanf("%d",&n);
    factorial(n);
    printf("factorial is %d",factorial(n));

}
int factorial(int n){
    if(n==1){
        return 1;
    }
    int factorialnm1=factorial(n-1);
    int factorialn=factorialnm1*n;
    return factorialn;
}
