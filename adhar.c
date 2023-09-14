#include<stdio.h>
int main(){
    int adhar[5];
    int *ptr=&adhar[0];
    for(int i=0;i<5;i++){
        printf("enter %dth value of adhar :",i+1);
        scanf("%d",&adhar[i]);
    }
    for(int i=0;i<5;i++){
        printf("the value of %dth adhar is %d \n",i+1,adhar[i]);
    }
    return 0;
}