#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("TEXT1.txt","w");
    fputc('A',fptr);
    fputc('P',fptr);   // HERE I CAN'T WRITE fputc("P",fptr) because it will give error.
    fputc('P',fptr);
    fputc('l',fptr);
    fputc('e',fptr);
    fclose(fptr);
    return 0;
}