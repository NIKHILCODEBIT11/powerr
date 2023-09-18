#include<stdio.h>
int main(){
    char str[100];
    char n;
    printf("enter string:");
    fgets(str,95,stdin);
    printf("enter the character:");
    scanf("%c",&n);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==n){
            count++;
        }
    }
        printf("the no. of charcaters %c are %d",n,count);
        return 0;
    
}