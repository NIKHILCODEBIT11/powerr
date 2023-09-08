#include <stdio.h>

int main() {
   int num;
   printf("enter a number \n");
   scanf("%d",&num);
   if (num >= 1){
       printf("natural number");
   }
   else{ 
       printf(" not a natural number");
   }
   return 0;
   }