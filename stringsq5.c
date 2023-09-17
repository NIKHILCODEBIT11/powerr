#include<stdio.h>
int main(){
    char str[100];
    char ch;
    int i=0;
    while(ch!='\n'){ // it will stop taking char once i press enter and goes to next line.
    scanf("%c",&ch);
    str[i]=ch;
    i++;
    } 
    str[i]='\0'; // if we don't put this condition then also program will print the statement we wrirte if it is less than or equal to 100, because till that many places are present so can print but if we write 101 char statement including space then it will show error.
    puts(str);

// here i put null character specifically in str[i], bcause null char automatically gets added in %s not in %c.
}