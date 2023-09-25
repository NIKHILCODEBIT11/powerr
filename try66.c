#include<stdio.h>
#include<string.h>
void pwd(char password[]);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    char password[n];
    fgets(password,n,stdin);
    pwd(password);
    return 0;

}
void pwd(char password[]){
    char str[100];
    int j=0;
    char str2[100];
    int k=0;
    char salt[]="123";
    char newpass[100];
    for(int i=0;i<3;i++,j++){
        str[j]=password[i];
    }
    str[j]='\0';
    for(int i=3;i<11;i++,k++){
        str2[k]=password[i];
    }
    str2[k]='\0';
    strcat(str,salt);
    puts(str);
    strcat(str,str2);
    puts(str);
}