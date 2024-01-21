#include<stdio.h>

// printing nth fibonacci number

int fibonacci(int n);
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int y=fibonacci(n);
    printf("The %dth term in fibonacci series is %d\n",n,y);
    return 0;
}
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
   int k=fibonacci(n-1)+fibonacci(n-2);
   return k;
}