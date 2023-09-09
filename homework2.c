#include<stdio.h>
// write a program to check if given character is digit or not.
int main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);
    if(ch>='0'||ch<'0'){
        printf("digit \n");
    }
    else{
        printf("not a digit \n");
    }
    printf("thank you \n");
    // doubt
    return 0;
}
    