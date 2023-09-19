#include<stdio.h>
#include<math.h>
#include<string.h>
struct complex{
    int real;
    int imag;
};
int main(){
    float n;
    struct complex number1 ={3,4};
    struct complex *ptr;
    ptr=&number1;
    printf("the real part is %d \n",ptr->real);
    printf("the imaginary part is %d \n",ptr->imag);
    float s=pow(number1.real,2);
    printf("s is %f \n",s);
    float m=pow(number1.imag,2);
    printf("m is %f \n",m);
    float y=s+m;
    printf("y is %f \n",y);
    n=pow(y,0.5);
    printf("the modulus is %f \n",n);
    return 0;
}