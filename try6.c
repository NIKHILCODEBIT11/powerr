#include<stdio.h>
void maxptr(int *a,int*b);
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    maxptr(&a,&b);
    return 0;

}
void maxptr(int *a,int *b){
    if(*a>*b){
        printf("a is greater than b");
    }
    else{
        printf("b is greater than a");
    }
}