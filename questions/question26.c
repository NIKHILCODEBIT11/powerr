#include<stdio.h>
// we will add 18% gst to the entered price.
float price(float a);
int main(){
    int b;
    printf("enter price : \n");
    scanf("%d",&b);
    float r=price(b);  
    printf("final price is %f",r);
    return 0;
} 
float price(float x){
    x=x+x*0.18;
    return x;
}