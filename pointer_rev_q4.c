#include<stdio.h>

// Sum of elements in array

void input(int arr[]);
void sum(int array[]);
int main(){
    int array[]={};
    input(array);
    sum(array);
    return 0;
}
void input(int arr[]){
    int n;
    printf("Enter number of elements to be entered in array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("array[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void sum(int array[]){
    int n,m,sum=0;
    int *p=array;
    printf("Enter the 1st index :");
    scanf("%d",&n);
    printf("Enter the 2nd index :");
    scanf("%d",&m);
    for(p=&array[n];p<=&array[m];p++){
        sum+=*p;
    }
    printf("Sum is %d",sum);
}
