#include<stdio.h>

// printing natural numbers

int print(int n);
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    print(n);
    return 0;
}
int print(int n){
    if(n==0){
        return 0;
    }
    int k=1+print(n-1);
    printf("%d",k);
    return k;
}