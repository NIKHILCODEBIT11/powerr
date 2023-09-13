#include<stdio.h>
float average(int a,int b,int c);
int main(){
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    printf("average of %d,%d and %d is %f",a,b,c,average(a,b,c));
    return 0;
 
}
float average(int x,int y,int z){
    float average=(float)(x+y+z)/3;
    return average;
}
