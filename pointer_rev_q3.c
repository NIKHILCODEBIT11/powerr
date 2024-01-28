#include<stdio.h>

// Sum of elements of array from 2nd index to 4th index

int input(int array[],int n){
    for(int i=0;i<n;i++){
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }
}
int sum(int arra[],int n){
    int sum=0,*o=arra;
    for(o=&arra[2];o<=&arra[4];o++){
        sum+=*o;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    printf("Sum is %d",sum(arr,n));
    return 0;
}