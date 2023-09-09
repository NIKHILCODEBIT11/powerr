#include<stdio.h>
//print the table of a number input by the user.
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int product=n*i;
        printf("%d \n",product);
    }
    return 0;
}