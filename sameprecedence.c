#include<stdio.h>
// this is for same precedence.
int main(){
    int a,b,c,d;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b \n");
    scanf("%d",&b);
    printf("enter c \n");
    scanf("%d",&c);
    printf("enter d \n");
    scanf("%d",&d);
    int x=a*b/c*d;
    printf("x is %d \n",x);
    return 0;
}