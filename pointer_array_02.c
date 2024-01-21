#include<stdio.h>
void print(int *ptr);
int main(){
    int array[]={1,2,3,4,5};
    print(array);
    return 0;
}
void print(int *ptr){
    for(int i=0;i<5;i++){
        printf("%d\t",*ptr+i);
    }
}