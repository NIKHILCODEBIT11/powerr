#include<stdio.h>
/* write two functions - one to print "hello" and
second to print - "good bye".
*/
void print();
void print2();
int main(){
    print();
    print2();
    return 0;
}
void print(){
    printf("hello \n");
}
void print2(){
     printf("good bye");
}