#include<stdio.h>
int main(){

    // TAKING NUMBER OF ROWS AND COLUMS FOR MAT1

    int n1,m1,sum=0;
    int mat1[n1][m1];
    printf("Enter number of rows :");
    scanf("%d",&n1);
    printf("Enter number of colums :");
    scanf("%d",&m1);

    // ENTER MAT 1
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            printf("Enter element in mat1[%d][%d] :",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    // TAKING NUMBER OF ROWS AND COLUMS FOR MAT2

    int n2,m2;
    int mat2[n2][m2];
    printf("Enter number of rows :");
    scanf("%d",&n2);
    printf("Enter number of colums :");
    scanf("%d",&m2);

    // ENTER MAT 2
    
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            printf("Enter element in mat1[%d][%d] :",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    // CHECKING WHETHER MULTIPLICATION OF MATRIX CAN BE DONE 

    if(m1==n2){
        int res[n1][m2];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                for(int k=0;k<m1;k++){
                    sum+=mat1[i][k]*mat2[k][j];
                }
                res[i][j]=sum;
                sum=0;
            }
        }
    }
    else{
        printf("Cannot multiply\n");
    }
    return 0;
}