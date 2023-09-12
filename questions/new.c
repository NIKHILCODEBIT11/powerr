#include<stdio.h>
int function(int a,int b,int *sum,int *prod,int *avg);
int main(){
    int a,b,sum,prod,avg;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    function(a,b,&sum,&prod,&avg);
    printf("sum=%d,product=%d,average=%d",sum,prod,avg);
    return 0;

}
int function(int a,int b,int *sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}
//clear
