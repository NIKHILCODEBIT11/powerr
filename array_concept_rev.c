#include<stdio.h>
#define N 10 //macro
int main(){
    int array[10]={[0]=1,[3]=4};
    for(int i=0;i<N;i++){
        printf("array[%d]=%d\n",i,array[i]);
    }
    return 0;
}