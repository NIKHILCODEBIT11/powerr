#include<stdio.h>
void prin(int a);
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    printf("the address of a is %u \n",&a);
    prin(a);
     printf("the address of a is %u \n",&a);
    return 0;

}
void prin(int a){ 
    printf("the address of a is %u \n",&a);
    // the value changes because this is function by call because of which gets a copy of value from main function.
} 