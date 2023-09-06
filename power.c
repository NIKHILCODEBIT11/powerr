#include<stdio.h>
#include<math.h>
int main(){
    float a;
    int b;
    printf("enter a \n");
    scanf("%f",&a);
    printf("so a is %f \n",a);
    printf("enter b \n");
    scanf("%d",&b);
    printf("so b is %d \n",b);
    float power=pow(a,b);
    printf("so power is %f \n",power);
    int m=16%3;
    printf("m is %d",m);
    return 0;
}