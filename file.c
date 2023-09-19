#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("TEST.txt","r");
    fclose(fptr);
    return 0;
}