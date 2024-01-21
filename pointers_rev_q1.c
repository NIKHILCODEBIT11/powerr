#include<stdio.h>
// swapping two numbers
void swap(int *n1,int *n2);
void swap1(int n1,int n2);
int main(){
    int n1,n2;
    printf("Enter n1 and n2 ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Value of n1 and n2 before swap are %d and %d\n",n1,n2);
    swap1(n1,n2);
    printf("Value of n1 and n2 by call by value are %d and %d\n",n1,n2);
    swap(&n1,&n2);
    printf("Value of n1 and n2 by call by reference are %d and %d\n",n1,n2);
    return 0;
}
void swap(int *n1,int *n2){
    int t;
    t=*n1;
    *n1=*n2;
    *n2=t;
}
void swap1(int n1,int n2){
    int t;
    t=n1;
    n1=n2;
    n2=t;
}