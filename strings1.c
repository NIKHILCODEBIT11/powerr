#include<stdio.h>
int main(){
    char str[]={'h','a','r','r','y','\0'};
    // or char str[]="harry";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        // only *ptr not &str or str[] or str[0].
        ptr++;
    }
    return 0;
}