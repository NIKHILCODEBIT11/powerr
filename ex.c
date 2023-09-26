#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("integer.txt","r");
    int d;
    fscanf(fptr,"%d",&d);
    printf("%d ",d);
    fscanf(fptr,"%d",&d);
    printf("%d ",d);
    fscanf(fptr,"%d",&d);
    printf("%d ",d);
    fclose(fptr);
    return 0;

}