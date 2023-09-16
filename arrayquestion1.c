#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *ptr=arr;
    printf("the value where pointer is pointing is %d \n",*ptr);
    *ptr++;
    *ptr++;
    printf("now pointer is pointing to %d",*ptr);
    return 0;
}