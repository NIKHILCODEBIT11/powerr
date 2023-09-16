#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *ptr=arr;
    printf("the pointer points to the value %d \n",*ptr);
    ptr=ptr+2;
    printf("now pointer points to %d",*ptr);
    return 0;
}