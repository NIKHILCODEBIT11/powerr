#include<stdio.h>
void print(char str[],int n);
int main(){
    char firstname[]="Nikhil";
    char middlename[]="Kumar";
    char lastname[]="Singh";
    print(firstname,6);
    print(middlename,5);
    print(lastname,5);
    return 0;


}
void print(char str[],int n){
    for(int i=0;str[i]!=0;i++){
        printf("%c \t",str[i]);
    }
    printf("\n");

    }
