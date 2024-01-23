#include<stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int seen[9]={0};
    while(n>0){
        int rem=n%10;
        if(seen[rem]==1){
            break;
        }
        else{
            seen[rem]=1;
        }
        n=n/10;
    }
    // Total flop idea :-
    // for(int i=0;i<10;i++){
    //     if(seen[i]==1){
    //         printf("Yes\n");
    //         break;
    //     }
    // }
    // printf("No\n");
    if(n>0){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}