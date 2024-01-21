#include<stdio.h>
int main(){
    int m;
    printf("Enter m:");
    scanf("%d",&m);
    switch(m){
        case 1 : printf("monday\n");
        break;
        case 2:printf("Tuesdat\n");
        break;
        default : printf("Not defined\n");
        break;
    }
    return 0;
}