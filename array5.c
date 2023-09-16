#include<stdio.h>
int main(){
    int arr[3][10];
    for(int i=0;i<10;i++){
        arr[0][i]=2*(i+1);
        printf("%d*%d=%d \n",2,(i+1),arr[0][i]);
    }
    for(int i=0;i<10;i++){
        arr[1][i]=7*(i+1);
        printf("%d*%d=%d \n",7,(i+1),arr[1][i]);
    }
    for(int i=0;i<10;i++){
        arr[2][i]=9*(i+1);
        printf("%d*%d=%d \n",9,(i+1),arr[2][i]);
    }




    
    return 0;
}