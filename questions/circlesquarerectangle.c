#include<stdio.h>
#include<math.h>
// write a program to print area of square, circle, and rectangle.
float circle(int r,int k);
int square(int a,int y);
int rectangle(int l, int b);
int main(){
    int r,k=2,y=2,a,l,b;
    printf("enter r: \n");
    scanf("%d",&r);
    printf("enter a: \n");
    scanf("%d",&a);
    printf("enter l: \n");
    scanf("%d",&l);
    printf("enter b: \n");
    scanf("%d",&b);
    float areac=circle(a,k);
    printf("area of circle is %f \n",areac);
    int areas=square(a,y);
    printf("area of square is %d \n",areas);
    int arear=rectangle(l,b);
    printf("area of rectangle is %d \n",arear);
    return 0;
    
} 
float circle(int r,int k){
    float s=pow(r,k);
    float d=3.14*s;
    return(d);
}
    int square(int a,int y){
        int h=pow(a,y);
    //little error in square area difference by 1 unit less because of power i think.
        return(h);
    }
    int rectangle(int l,int b){
        int u=l*b;
        return(u);
    }