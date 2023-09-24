#include<stdio.h>
int count(char str[]);
int main(){
    char str[100];
    printf("enter string:");
    fgets(str,100,stdin);
    printf("Total number of vowels are  %d",count(str));
    return 0;
    }
int count(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}