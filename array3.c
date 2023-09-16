#include<stdio.h>
void reverse(int arr[],int n);
int main(){
    int arr[6]={1,2,3,4,6,7};
    reverse(arr,6);
    for(int i=0;i<6;i++){
        printf("the value of %d element is %d \n",i,arr[i]);
    }
    return 0;

}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}