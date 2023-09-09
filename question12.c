#include<stdio.h>
// print the sum of first n natural numbers, then print in reverse order.
int main(){
    int n,sum=0;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("sum is %d \n",sum);
    for(int i=n;i>=1;i--){
        printf("%d \n",i);
    }
    return 0;
}