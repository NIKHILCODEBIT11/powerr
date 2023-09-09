#include<stdio.h>
// printing sum of first n natural numbers and printing in reverse order in single for loop.
int main(){
    int n,sum=0;
    printf("enter n : \n");
    scanf("%d",&n);
    for(int i=0,j=n;i<=n;i++,j--){
        sum+=i;
        printf("%d \n",j);
        printf("sum is %d \n",sum);
    }
    return 0;
}