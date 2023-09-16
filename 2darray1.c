#include<stdio.h>
int main(){
    int arr[2][3][5];
    // int *ptr=arr;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<5;k++){
                printf("enter the marks of student %d who studies in school %d for the subject %d:",j+1,i+1,k+1);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<5;k++){
                printf("the marks of student %d from school %d in subject %d is %d \n",j+1,i+1,k+1,arr[i][j][k]);
            }
        }
    }
    return 0;
}