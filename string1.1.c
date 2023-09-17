#include<stdio.h>
void print(char str[]);
int main(){
    char firstname[]="Nikhil";
    char middlename[]="Kumar";
    char lastname[]="Singh";
    print(firstname);
    print(middlename);
    print(lastname);
    return 0;


}
void print(char str[]){
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");

    }
