#include<stdio.h>
// WRITE A PROGRAM TO FIND IF A CHARACTER ENTERED BY USER IS UPPERCASE OR NOT.
int main(){
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("UPPERCASE \n");
    }
    else if(ch>='a'&&ch<='z'){
        printf("LOWERCASE");
    }
    else{
        printf("NO ENGLISH");
    }
    return 0;
}