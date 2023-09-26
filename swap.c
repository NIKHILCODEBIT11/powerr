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
    fptr=fopen("swap.txt","r");
    int l,k;
    fscanf(fptr,"%d",&l);
    fscanf(fptr,"%d",&k);
    fptr=fopen("swap.txt","w");
    int s=l+k;
    fprintf(fptr,"sum is %d",s);
    fclose(fptr);
    return 0;
}