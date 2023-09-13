#include<stdio.h>
float force(int m);
int main(){
    int m;
    printf("enter m:");
    scanf("%d",&m);
    printf("force of attraction on a body of mass %dkg is %.3f",m,force(m));
    return 0;          //%.3f means the float value will print upto 3 decimals.
}
float force(int m){
    float force=m*9.8;
    return force;
}