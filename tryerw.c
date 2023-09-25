#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int aadhar[n];
    for(int i=0;i<n;i++){
        printf("value at %d index is:",i);
        scanf("%d",&aadhar[i]);
    }
    for(int i=0;i<n;i++){
        printf("value at %d index is %d \n",i,aadhar[i]);
    }
    return 0;
}