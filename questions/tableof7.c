#include<stdio.h>
// table of input number
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int product=n*i;
        printf("%d \n",product);
    }
    return 0;
}