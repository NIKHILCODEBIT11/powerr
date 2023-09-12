#include<stdio.h>
void square(int n);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    square(number);
    printf("number is %d",number);
    return 0;

}
void square(int x){
    x=x*x;
    printf("square is: %d \n",x);
}