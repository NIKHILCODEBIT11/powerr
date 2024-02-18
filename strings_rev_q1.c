#include<stdio.h>
#include<string.h>

// Using strcmp(str1,str2)

int main(){
    char str1[]={'a','p','p','l','e','\0'};
    char str2[]={'H','A','R','R','Y','\0'};
    int n=strcmp(str1,str2);
    printf("%d",n);
    return 0;
}