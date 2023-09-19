#include<stdio.h>
typedef struct accountinfo{
    int accountno;
    char name[100];
} acc;
int main(){
    acc person1={123,"haartyu"};
    acc person2={134,"heriy"};
    acc person3={144,"hartiou"};
    printf("the account no. of person 2 is %d \n",person2.accountno);
    printf("name of person 3 is %s",person3.name);

}