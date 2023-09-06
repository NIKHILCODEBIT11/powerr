#include<stdio.h>
#include<math.h>
// this is for operator precedence.
int main(){
    int a,b,c;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b \n");
    scanf("%d",&b);
    printf("enter c \n");
    scanf("%d",&c);
    int operand=a+b*c;
    printf("operand is %d",operand);
    return 0;
}