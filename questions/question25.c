#include<stdio.h>
// print table of input number n using function.
void print(int a);
int main(){
    int x;
    printf("enter a: \n");
    scanf("%d",&x);
    print(x); //actual parameter/argument
    return 0;
}
void print(int b){  //formal parameter
    int c;
    for(int i=1;i<=10;i++){
        c=b*i;
        printf("%d \n",c);

    }
}