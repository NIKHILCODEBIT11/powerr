#include<stdio.h>
# define n 3
int main(){
    int array[n][2]={{1,2},{1,3},{1,44}};
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            printf("array[%d][%d]=%d\n",i,j,array[i][j]);
        }
    }
    return 0;
}