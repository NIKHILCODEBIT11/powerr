#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("newfile1.c","w");
    if(fptr==NULL){
        printf("File doesn't exist.");
    }
    else{
        fclose(fptr);
    }
    return 0;

}