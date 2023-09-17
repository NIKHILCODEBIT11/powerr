#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Harry ";  // HERE SPACE IS FOR 100 CHAR.
    char str2[]="saying hi";  //HERE WE DID NOT DEFINED SPACE BUT KNOW BY COUNTING THAT IT TAKES 10
    strcat(str1,str2);           //CHAR(even spaces and at end '\0' must be counted.) 
    puts(str1);
    return 0;
}