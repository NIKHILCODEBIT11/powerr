#include<stdio.h>
// ternary operator
int main(){
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    age>18?printf("adult"):printf("not adult");
    return 0;
}