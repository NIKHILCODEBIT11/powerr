#include<stdio.h>
int swap(int a,int b);
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    swap(a,b);
    printf("a=%d \n,b=%d",a,b);
    return 0;
}
int swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d \n",a);
    printf("b=%d \n",b);
    
}