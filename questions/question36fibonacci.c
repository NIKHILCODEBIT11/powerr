#include<stdio.h>
// write a function to print n terms of fibonacci sequence.
int fibonacci(int n);
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("fibonacci is : %d",fibonacci(n));
    return 0;
}
int fibonacci(int n){
    if(n==0||n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
    }
    }
    int fibonaccim1=fibonacci(n-1);
    int fibonaccim2=fibonacci(n-2);
    return(fibonacci(n-1)+fibonacci(n-2));
}