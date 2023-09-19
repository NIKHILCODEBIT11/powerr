#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("TEXT1.txt","r");
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("character=%d \n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character=%d \n",ch);
     fscanf(fptr,"%d",&ch);
    printf("character=%d \n",ch);
    fclose(fptr);
    return 0;
}