#include<stdio.h>
// MAKE A PROGRAM TO READ 5 INTEGERS FROM A FILE.
int main(){
    FILE*fptr;
    fptr=fopen("integers.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("number is %d \n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d \n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d \n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d \n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d \n",n);
    fscanf(fptr,"%d",&n);
    printf("number is %d \n",n);
    fclose(fptr);
    return 0;
}