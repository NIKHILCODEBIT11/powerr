#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    square(number);
    printf("number is %d \n",number);
    _square(&number);
    printf("number is %d \n",number);
    return 0;

}
// call by reference
void square(int x){
    x=x*x;
    printf("square is: %d \n",x);
}
void _square(int *n){
    *n=(*n)*(*n);         // 4*4=16
    printf("square is %d \n",*n);
}