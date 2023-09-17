#include<stdio.h>
int countlength(char str[]);
int main(){
    char str[100];
    printf("enter name:");
    fgets(str,100,stdin);
    printf("the length is: %d",countlength(str));
    return 0;

}
int countlength(char str[]){
int count=0;
for(int i=0;str[i]!='\0';i++){
    count++;
}
return count-1;
// we returned (count-1) because when str[i]!=0, then also the condition i++ ran.
}