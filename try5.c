#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;

}
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    int factn=fact(n-1)*n;
    return factn;
}