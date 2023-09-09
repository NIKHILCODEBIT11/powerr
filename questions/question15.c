#include<stdio.h>
/* keep taking numbers as input from user untill 
user enters a number which is a multple of 7.
*/
int main(){
    int n;
    do{
        printf("enter number: ");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n%7==0){
            printf("multiple of 7 \n");
            break;
        }
    }
        while(4543);
    return 0;
}
