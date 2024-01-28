#include<stdio.h>
int sum(int b[]);
int main(){
    int arr[]={1,2,3,4,5,4};
    printf("sum is %d",sum(arr));
}
int sum(int b[2]){

    // Even though i am passing arr/&arr[0] to b[2] still it not going to b[2] rather acting normal
    
    int s=0;
    for(int i=2;i<6;i++){
        printf("%d\t",b[i]);
    }
    return s;
}