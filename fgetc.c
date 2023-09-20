#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("TEST.txt","r");
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    printf("%c \n",fgetc(fptr));
    return 0;
}