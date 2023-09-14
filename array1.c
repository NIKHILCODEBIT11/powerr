#include<stdio.h>
// write a function to count the number of odd numbers in an array.
void countodd(int arr[],int n);
int main(){
    int arr[10]={1,3,4,5,9,2,8,7,7,7};
    countodd(arr,10);
}
void countodd(int arr[],int n){
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        count++;
    }
}
    printf("so no. of odd numbers are %d \n",count);
}


