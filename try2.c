#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("the sum of %d natural numbers is %d",n,sum(n));
    return 0;

}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumn=n+sum(n-1);
    return sumn;
}