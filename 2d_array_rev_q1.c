#include<stdio.h>
# define n 5
int main(){
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element in array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("array[%d][%d]=%d\n",i,j,array[i][j]);
        }
    }

    // row sum 

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=array[i][j];
        }
        printf("row sum = %d\n",sum);
        sum=0;
    }

    // colum sum

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=array[j][i];
        }
        printf("column sum=%d\n",sum);
        sum=0;
    }
    return 0;
}