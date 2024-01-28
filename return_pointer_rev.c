#include<stdio.h>

// Returning address to a pointer 

int *find_mid(int arr[],int n){
    if(n%2==0){
        printf("There are two mid terms.\n");
        printf("%d and %d\n",arr[n/2-1],arr[n/2]);
    }
    else{
        return &arr[n/2];
    }
}
int main(){
    int n;
    printf("Enter length of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int *k=find_mid(arr,n);
    printf("Mid term is %d\n",*k);
    return 0;
}