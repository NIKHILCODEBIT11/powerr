#include<stdio.h>
#include<math.h>
int square(int n,int b);
int main(){
    int n,b=2;
    printf("enter n: \n");
    scanf("%d",&n);
    int power=square(n,b);
    printf("square is %d",power);
    return 0;
}
int square(int n,int b){
    float power=pow(n,b);
    return power;
}