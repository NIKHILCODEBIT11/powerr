#include<stdio.h>

// Sum of elements in a given array

int sum(int array[],int n);
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int arr[6]={2,44,32,56,41,2};
    printf("The sum is %d",sum(arr,6));
    return 0;
}
int sum(int array[],int n){
    int sum=0,*p=array;
    for(p=&array[2];p<=&array[4];p++){
        sum+=*p;
    }
    return sum;
}