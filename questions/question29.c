#include<stdio.h>
// find square of input number.
#include<math.h>
int square(int a, int b);
int main(){
    int a,b;
    printf("enter a: \n");
    scanf("%d",&a);
    b=2;
    float square1=square(a,b);
    printf("square is %f",square1);
    return 0;
}
int square(int a, int b){
    int square=pow(a,b);
    return pow(a,b);
}
