#include<stdio.h>
/* write a program in c to find the maximum number 
between two numbers using a pointer
*/
void print(int a,int b,int *h,int *k);
int main(){
    int a,b,h,k;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    print(a,b,&h,&k);
    return 0;

}
void print(int a,int b,int *h,int *k){
     *h=a;
     *k=b;
     if(*h>*k){
        printf("a is greater.");
     }
     else{
        printf("b is greater.");
     }
}


   