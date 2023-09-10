#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==3){
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}