#include<stdio.h>
void print(char str[]);
int main(){
    char firstname[100];
    char middlename[100];
    char lastname[100];
    printf("enter first name:");
    fgets(firstname,100,stdin);
    printf("enter middle name:");
    fgets(middlename,100,stdin);
    printf("enter lat name:");
    fgets(lastname,100,stdin);
    print(firstname);
    print(middlename);
    print(lastname);
    return 0;
}
void print(char str[]){
    char *ptr=str;
    for(int i=0;*ptr!=0;i++){
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
}