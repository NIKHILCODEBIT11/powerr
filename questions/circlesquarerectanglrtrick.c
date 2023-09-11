#include<stdio.h>
#include<math.h>
// write a program to print area of square, circle, and rectangle.
float circle(int r);
int square(int a);
int rectangle(int l, int b);
int main(){
    int r,a,l,b;
    printf("enter r: \n");
    scanf("%d",&r);
    printf("enter a: \n");
    scanf("%d",&a);
    printf("enter l: \n");
    scanf("%d",&l);
    printf("enter b: \n");
    scanf("%d",&b);
    float areac=circle(a);
    printf("area of circle is %f \n",areac);
    int areas=square(a);
    printf("area of square is %d \n",areas);
    int arear=rectangle(l,b);
    printf("area of rectangle is %d \n",arear);
    return 0;
    
} 
float circle(int r){
    return(3.14*r*r);
}
    int square(int a){
        return(a*a);
    }
    int rectangle(int l,int b){
        return(l*b);
    }