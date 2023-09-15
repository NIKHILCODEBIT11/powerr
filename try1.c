#include<stdio.h>
float avg(int a,int b,int c);
int main(){
    int a,b,c;
    printf("enter a;");
    scanf("%d",&a);
     printf("enter a;");
    scanf("%d",&b);
     printf("enter c");
    scanf("%d",&c);
    printf("avg is %f",avg(a,b,c));
    return 0;

}
float avg(int a,int b,int c){
    float result;
    result=(a+b+c)/3.0;
    return result;
}