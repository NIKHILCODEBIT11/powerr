#include<stdio.h>
int main(){
    int aadhar[5];
    int *ptr=aadhar;
    for(int i=0;i<5;i++){
        printf("Value at %d index=",i);
        scanf("%d",&aadhar[i]);
    }
    for(int i=0;i<5;i++){
        printf("Value at %d index is %d\n",i,aadhar[i]);
    }
    return 0;
}