#include<stdio.h>
// printing sum of first n natural numbers and printing in reverse order in single for loop.
int main(){
    int n,sum=0;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=0,j=n;i<=n;i++,j--){
        sum=sum+i;
        printf("%d \n",j);
    }
    printf("sum is %d",sum);
    return 0;
    // very very unique problem for concept of loop just run.
}
// why j is printing reverse numbers without condition of j in for loop.