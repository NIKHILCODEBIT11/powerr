#include<stdio.h>
int count(char str[]);
int main(){
    char str[100];
    printf("enter name:");
    fgets(str,100,stdin);
    printf("the length of name is %d",count(str));
    return 0;
}
int count(char str[]){
    int countl=0;
    for(int i=0;str[i]!='i';i++){
        countl++;
    }
    return countl;
}