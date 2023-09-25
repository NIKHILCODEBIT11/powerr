#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int aadhar[n];
    int*ptr=aadhar;
    for(int i=0;i<n;i++){
        printf("value at %d index:",i);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++){
        printf("value at %d index is %d \n",i,*(ptr+i));
    }
    return 0;
}