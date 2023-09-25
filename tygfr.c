#include<stdio.h>
int main(){
    int str[10]={1,2,3,4,5,6,7,8,9,0};
    int*ptr=str;
    for(int i=0;i<10;i++){
        printf("value at %d index is %d \n",i,*ptr);
        ptr++;
    }
    return 0;
}