#include<stdio.h>
int swap(int *a,int *b);
int main(){
    int x,y;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    swap(&x,&y);
    printf("x is %d and y is %d", x, y);
    return 0;

}
int swap(int *a, int *b){
    int t =*b;
    *b=*a;
    *a=t;
    
}