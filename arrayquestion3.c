#include<stdio.h>
int main(){
    int arr[10], M;
    printf("enter m:");
    scanf("%d",&M);
    for(int i=0;i<10;i++){
        arr[i]=M*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%dx%d=%d \n",M,i+1,arr[i]);
    }
    return 0;
}