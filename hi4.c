#include<stdio.h>
void reverse(int arr[],int n); 
int main(){
    int arr[]={1,4,3,7,66,8,9};
    reverse(arr,7);
    for(int i=0;i<7;i++){
        printf("the value of element %d is %d \n",i,arr[i]);
    }
    return 0;

}
void reverse(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
}