#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("sum of %d is %d",n,sum(n));
    return 0;

}
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        int sumn=n+sum(n-1);
        return sumn;
    }
}