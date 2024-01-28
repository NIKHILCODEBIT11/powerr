#include<stdio.h>

// Knowing minimum and maximum element in an array using array only

int main(){
    int n1;
    printf("Enter n1 :");
    scanf("%d",&n1);
    int arr[n1];
    for(int i=0;i<n1;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int min,max;
    min=max=arr[0];
    for(int i=1;i<n1;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Max is %d\n",max);
    printf("Min is %d\n",min);
    return 0;
}