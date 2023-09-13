#include<stdio.h>
int numbers(int *a,int *b,int *sum,float *avg);
int main(){
    int a,b,sum;
    float avg;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    numbers(&a,&b,&sum,&avg);
    printf("sum is %d \n",sum);
    printf("avg is %.5f",avg);
    printf("new a  is %d \n",a);
    printf("new b is %d \n",b);
    return 0;

}
int numbers(int *a,int *b,int *sum,float *avg){
    *sum=*a+*b;
    *avg=*sum/2.0;
     *a=*a+2;
     *b=*b*6;
    
}