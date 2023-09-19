#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("TEST2.txt","a");
    fprintf(fptr,"%c",'O');
    fprintf(fptr,"%c",'R');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'E');
    fclose(fptr);
    return 0;
}