#include<stdio.h>

// Reversing elemnts of an array using pointer and array

void input(int arr[]);
void reverse(int arr[],int n);
int main(){
    int array[]={};
    input(array);
    return 0;
}
void input(int arr[]){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("array[%d]=",i);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
}
void reverse(int arr[],int n){
    int *p=arr;
    printf("Array in input order is :-\n");
    for(p=arr;p<&arr[n];p++){
        printf("%d\t",*p);
    }
    printf("\nArray in reverse order :-\n");
    for(p=&arr[n-1];p>=arr;p--){
        printf("%d\t",*p);
    }
}