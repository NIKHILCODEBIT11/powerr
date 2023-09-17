#include<stdio.h>
int main(){
    char str[5];
    printf("enter full name:");
    //gets(str);
    fgets(str,100,stdin);
    puts(str);
    return 0;
}