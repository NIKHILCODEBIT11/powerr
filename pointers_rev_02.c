#include<stdio.h>
int main(){
    float i=54;
    float *ptr=&i;
    float **pptr=&ptr;
    printf("i=%f\n",i);
    printf("*ptr=%f\n",*ptr);
    printf("**pptr=%f\n",**pptr);
    return 0;
}