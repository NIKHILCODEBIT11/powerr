
#include<stdio.h>
void slice(char str[],int n,int m);
int main(){
    int n,m;
    char str[100];
    printf("enter string:");
    scanf("%s",str);
    printf("enter n:");
    scanf("%d",&n);
    printf("enter m:");
    scanf("%d",&m);
    slice(str,n,m);
    return 0;

}
void slice(char str[],int n,int m){
    char new[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        new[j]=str[i];
    }
    new[j]='\0';
    puts(new);
}
