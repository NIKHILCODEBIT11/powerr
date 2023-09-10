#include<stdio.h>
// print factorial of a number n.
int main(){
    int n,factorial=1;
    printf("enter n: \n" );
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("%d",factorial);
    return 0;
    // this code is only for small numbers.
}