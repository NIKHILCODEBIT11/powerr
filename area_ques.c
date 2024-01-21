#include<stdio.h>
float area_square(float s);
float area_circle(float s);
float area_rectangle(float s,float t);
int main(){
    float s1,s2,r;
    printf("Enter radius of the circle : ");
    scanf("%f",&r);
    printf("The area of circle is %f\n",area_circle(r));
    printf("Enter side of the square : ");
    scanf("%f",&s1);
    printf("Area of square is %f \n",area_square(s1));
    printf("Enter length and bredth : ");
    scanf("%f",&s1);
    scanf("%f",&s2);
    printf("Area of rectangle is %f \n",area_rectangle(s1,s2));
    return 0;
}
float area_square(float x){
    return x*x;
}
float area_circle(float r){
    return (3.14*r*r);
}
float area_rectangle(float e,float f){
    return e*f;
}