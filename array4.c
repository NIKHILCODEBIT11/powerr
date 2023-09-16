#include<stdio.h>
void count(int arr[],int n);
int main(){
    int arr[]={1,-2,-3,0,-5,7,8};
    count(arr,7);
    return 0;

}
void count(int arr[],int n){
    int countpositive;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            countpositive++;
        }
        else{
              1;
        }
    }
            printf("number of positive integers=%d \n",countpositive);
}