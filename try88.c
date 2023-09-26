#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("swap.txt","w");
    fclose(fptr);
    int n,m;
    printf("enter n;");
    scanf("%d",&n);
    printf("enter m;");
    scanf("%d",&m);
    fptr=fopen("swap.txt","w");
    fprintf(fptr,"%d \t",n);
    fprintf(fptr,"%d \t",m);
    fclose(fptr);
    return 0;
}