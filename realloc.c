#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    int n,m;
    printf("enter n:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter %d index:",i);
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,m);
    printf("enter m:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("enter %d index:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<m;i++){
        printf("value at %d index is %d \n",i,ptr[i]);
    }
    return 0;
}