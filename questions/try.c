#include<stdio.h>
#include<math.h>
float squareroot(int n);
int main(){
    int n;
    printf("enter n: \n");
    scanf("%d",&n);
    printf("squareroot of %d is %f", n, squareroot(n));
}
float squareroot(int n){
    if(n==0){
        return 0;
    }
    float root=pow(n,1.0/2.0);
    return root;
}
