#include<stdio.h>
void checkcar(char str[],char ch);
int main(){
    char str[100];
    char ch;
    printf("enter the string:");
    fgets(str,90,stdin);
    printf("enter character:");
    scanf("%c",&ch);
    checkcar(str,ch);
    return 0;


}
void checkcar(char str[],char ch){
    for(int i=0;str[i]!=0;i++){
        if(str[i]==ch){
            printf("yes character %c is present",ch);
            return;
        }
    }
    printf("character %c is not present",ch);
}