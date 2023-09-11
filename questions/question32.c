#include<stdio.h>
// sum of first n natural numbers using recursion.
int sum(int n);
int main(){
    int n;
    printf("enter n: \n");
    scanf("%d",&n);
    sum(n);
    printf("sum is %d \n",sum(n));
    return 0;
}
int sum(int x){
    if(x==1){
        return 1;
    }
    int sumxm1=sum(x-1);  //sum of 1 to n.
    int sumx=sumxm1+x;
    return sumx;
}

