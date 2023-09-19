#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("TEXT1.txt","w");
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
    fclose(fptr);
    return 0;

}