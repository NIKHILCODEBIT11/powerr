#include<stdio.h>
// write a function to convert celsius to farenheit.
float celsius(float n);
int main(){
    float n;
    printf("enter temperature in celsius: ");
    scanf("%f",&n);
    float far=celsius(n);
    printf("farenheit : %f",far);
    return 0;
}
float celsius(float n){
    float far=n*(9.0/5.0)+32;
    return far;
}