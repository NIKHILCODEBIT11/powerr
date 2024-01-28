#include<stdio.h>
int main(){
    int n;
    printf("Enter length of the array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d th element :",i);
        scanf("%d",&arr[i]);
    }

    // after reversing 

    for(int i=n-1;i>=0;i--){
        printf("%d th element :- %d\n",n-1-i,arr[i]);
    }
    return 0;
}