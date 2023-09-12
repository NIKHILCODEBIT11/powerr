#include<stdio.h>
char result(int n);
int main(){
    int n;
    do{
        printf("enter n: ");
        scanf("%d",&n);
        result(n);

    }
    while(1);
    return 0;

}
char result(int n){
    if(n>=50){
        printf("hot \n");
    }
    else{
        printf("cold \n");
    }
}