#include<stdio.h>
int print(int n);
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    print(n);
    printf("this\n");
    return 0;
}
int print(int n){
    printf("thhhis\n");
    if(n==1){
        printf("rgwfed\n");
        return 25;
        printf("dsfgs\n");
    }
    printf("aaaa\n");
    printf("%d\n",print(n-1));
    printf("rrrrrrr\n");
}