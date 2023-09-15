#include<stdio.h>
void value(int *n);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("value of n is %d \n",n);
    value(&n);
    printf("the latest value of n is %d",n);
    return 0;

}
void value(int *n){
    *n=*n*10;
}