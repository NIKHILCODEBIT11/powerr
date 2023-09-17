#include<stdio.h>
int main(){
   // char str[10]="hello world";
    //puts(str);
    //str="hello";
    // it is displaying that it should be modifiable value.
    char *str="hello world";
    puts(str);
    str="hello";
    puts(str);
    str="world";
    puts(str);
    return 0;



}