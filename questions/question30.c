#include<stdio.h>
void printhw(int n);
int main(){
    int n;
    printf("enter n: \n");
    scanf("%d",&n);
    printhw(n);  // write the niteger of how many times you want to run the call.
}
// recursive function
void printhw(int n){
    if(n==0){
        return;  // not returning anything.
    }
    printf("hello world \n");  // lazy function so it will print just 1 time then will call itself but now fro n-1 times as already once it is printed.
    printhw(n-1);  // we wrote n-1 because n-1 value will be called to above printhw(int n).
} 