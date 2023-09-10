#include<stdio.h>
// same as question 22 but proving that execution starts from main directly or indirectly.
void namaste();
void bonjur();
int main(){
    char ch;
    printf("enter f for french and i for indian : ");
    scanf("%C",&ch);
    namaste();
    return 0;
}
void namaste(){
    printf("namaste \n");
    bonjur();
}
void bonjur(){
    printf("bonjur");
}