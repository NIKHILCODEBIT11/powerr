#include<stdio.h>
void print();      //function prototype
int main(){
    print();       //function call
    print();
    return 0;
}
void print(){          //function definition
    printf("hello \n");
    printf("my name \n");
}