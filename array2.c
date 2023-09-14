#include<stdio.h>
int reverse(int arr[],int n);
int printnewarr(int arr[],int n);
int main(){
    int arr[9]={1,1,1,3,4,5,9,0,33};
    reverse(arr,9);
    printnewarr(arr,9);
    return 0;

}
int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
        /* reverse is function call by reference because 
        arr is already a pointer we know that and even 
        the change in values is reflecting on main where
        by the help of the other   function i am 
        printning reverse array.
        */
    }
}
    int printnewarr(int arr[],int n){
        for(int i=0;i<n;i++)
        printf("%d \t",arr[i]);

    }
