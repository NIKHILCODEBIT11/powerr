#include<stdio.h>
int print_table(int n){
    for(int i=1;i<11;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 3;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    print_table(n);
    return 0;
}