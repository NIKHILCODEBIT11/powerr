#include<stdio.h>
// 2 numbers - a & b, are written in a file. Write a program to replace them with their sum.
int main(){
    FILE*fptr;
    fptr=fopen("sum.txt","r"); // first of all open in read mode to copy those 2 numbers in file to integers defined by me.
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr=fopen("sum.txt","w"); // this time i open this in write mode to clear all other integers and can write it's sum.
    int s=a+b;
    fprintf(fptr,"sum=%d \n",s);
    fclose(fptr);
    return 0;
}