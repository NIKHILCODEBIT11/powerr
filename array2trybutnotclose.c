#include<stdio.h>
// write a function to reverse an array.
int reverse(int arr[],int n);
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    return 0;

}
int reverse(int arr[],int n){
for(int i=n-1;i>=0;i--){
    printf("%d \n",arr[i]);
}
}
