#include<stdio.h>

// Passing string to a pointer

int length(char *ptr);
int main(){
    char name[20];
    printf("Enter name :");
    fgets(name,20,stdin);
    int k=length(name);
    printf("Length is %d",k);
    return 0;
}
int length(char *ptr){
    int count=0;
    for(int i=0;(*ptr)!='\0';ptr++){
        count++;
    }
    return count-1;
}