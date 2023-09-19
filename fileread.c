#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("TEST.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character=%c \n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character=%c \n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character=%c \n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character=%c \n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character=%c \n",ch);
    return 0;
    fclose(fptr);
}