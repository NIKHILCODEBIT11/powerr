#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter a \n",a);
    scanf("%d",&a);
    printf("so a is %d \n",a);
    int b;
    printf("enter b \n",b);
    scanf("%d",&b);
    printf("so b is %d \n",b);
    int power=pow(a,b);
    printf("so power is %d",power);
}