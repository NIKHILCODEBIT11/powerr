#include<stdio.h>
int main(){
    char arr[50];
    printf("Enter name :");
    fgets(arr,4,stdin);   // Here only (n-1) or (4-1) characters will be taken as input.
    puts(arr);
    return 0;
}