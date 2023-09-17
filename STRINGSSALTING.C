#include<stdio.h>
#include<string.h>
void pwd(char password[]);
int main(){
    char password[100];
    printf("enter password:");
    scanf("%s",password);
    pwd(password);

}
void pwd(char password[]){
    char salt[]="123";
    char newpass[111];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}