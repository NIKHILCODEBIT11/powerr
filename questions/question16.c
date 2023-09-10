#include<stdio.h>
// print all odd numbers between 5 and 50.
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d \n",i);
    }
    printf("thank you");
    return 0;
}