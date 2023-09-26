#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)malloc(5*sizeof(int));
    int j=1;
    for(int i=0;i<5,j<=10;i++,j=j+2){
        if(j%2!=0){
            ptr[i]=j;
        }
        }
        for(int i=0;i<5;i++){
            printf("value at %d index is %d \n",i,ptr[i]);
        }
        ptr=realloc(ptr,6);
        int k=0;
        for(int i=0;i<6,k<=10;i++,k=k+2){
            if(k%2==0){
                ptr[i]=k;
            }
        }
        for(int i=0;i<6;i++){
            printf("value at %d index is %d \n",i,ptr[i]);
        }
        return 0;
}