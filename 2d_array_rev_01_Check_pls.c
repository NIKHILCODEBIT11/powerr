#include<stdio.h>
# define N 2
void input(int array[N][3]);
void output(int array[N][3]){
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            printf("Value at array[%d][%d] is %d\n",i,j,array[i][j]);
        }
    }
}
int main(){
    int array[N][3];
    input(array[N][3]);
    output(array[N][3]);
    return 0;
}
void input(int array[N][3]){
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            printf("Enter input for array[%d][%d] :",i,j);
            scanf("%d",array[i][j]);
        }
    }
}