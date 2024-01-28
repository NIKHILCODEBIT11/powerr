#include<stdio.h>

// Knowing minimum and maximum element present in an array

int min_max(int arr[],int len,int *min,int *max){
    *min=*max=arr[0];
    for(int i=1;i<len;i++){
        if(*min>arr[i]){
            *min=arr[i];
        }
        else if(*max<arr[i]){
            *max=arr[i];
        }
    }
    printf("the max is %d\n",*max);
    return *min;
}
int main(){
    int n,min,max;
    printf("Enter number of elements in array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("The minimum is %d\n",min_max(arr,n,&min,&max));
    return 0;
}