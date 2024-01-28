#include<stdio.h>

// Sum of elements in an array

int input(int array[],int n);
int sum(int array[],int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    for(int i=0;i<n;i++){
        printf("array[%d]=%d\n",i,arr[i]);
    }
    printf("Sum of elements is %d",sum(arr,n));
    return 0;
}
int sum(int array[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    return sum;
}
int input(int array[],int n){
    for(int i=0;i<n;i++){
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }
}