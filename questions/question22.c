#include<stdio.h>
/*write a function that prints Namaste if user is 
Indian and Bonjour if the user is French.
*/
void Indian();
void French();
int main(){
    char ch;
    printf("enter f for French and i for Indian :");
    scanf("%c",&ch);
    if(ch=='f'){
        French();
    }
    else{
        Indian();
    }
    return 0;
    }
    void Indian(){
        printf("Namaste");
    }
    void French(){
        printf("Bonjur");
    }
          
    