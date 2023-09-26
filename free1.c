#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    int n;
    printf("enter n:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d \n",ptr[i]);
    }
    free(ptr);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("value at %d index:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("value at %d index is %d \n",i,ptr[i]);
    }
    return 0;
}