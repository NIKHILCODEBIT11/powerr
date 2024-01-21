#include<stdio.h>
float price(float *ptr);
int main(){
    float items[3];
    printf("Enter prices ");
    scanf("%f",&items[0]);
    scanf("%f",&items[1]);
    scanf("%f",&items[2]);
    price(items);
    printf("final price is %f,%f,%f\n",items[0],items[1],items[2]);
    return 0;
}
float price(float *ptr){
    float p=*ptr;
    p=p+(0.18*(p));
    printf("The final price of 1st item is %f\n",p);
    (ptr)++;
    float m=*ptr;
    m=m+(0.18*(m));
    printf("The final price of 2nd item is %f\n",m);
    (ptr)++;
    // float k=*ptr;
    printf("%f\n",*ptr);
    *ptr=*ptr+(0.18*(*ptr));  // i can use k here instead of *ptr if i don't want value of items[2] to change in main function.
    printf("The final price of 3rd item is %f\n",*ptr);
}