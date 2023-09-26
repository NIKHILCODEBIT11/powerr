#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    float*ptr;
    ptr=(float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++){
        printf("enter price at %d index:",i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%f \n",ptr[i]);
    }
    return 0;
}