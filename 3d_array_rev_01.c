#include<stdio.h>
#define n 2
# define q 3
# define w 4
int main(){
    int array[n][q][w]={{{1,2,3,4},{4,3,2,1},{2,3,1,4}},{{1,2,3,4},{4,3,2,1},{2,4,3,1}}};
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<w;k++){
                printf("array[%d][%d][%d]=%d\n",i,j,k,array[i][j][k]);
            }
        }
    }
}