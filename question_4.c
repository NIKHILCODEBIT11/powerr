#include<stdio.h>

// printing conversion of celsius to farenhite

float temp(int n);
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    printf("The temp in f is %f",temp(n));
}
float temp(int n){
    float k=(n*9.0/5.0)+32;
    return k;
}