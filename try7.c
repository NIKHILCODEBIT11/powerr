#include<stdio.h>
void array(int arr[],int n);
int main(){
    int n=4;
    int arr[]={1,2,3,4};
    printf("arr[0]=%d \n",arr[0]);
    array(arr,4);
    printf("arr[0]=%d",arr[0]);
    return 0;


}
void array(int arr[],int n){
arr[0]=23;
}
