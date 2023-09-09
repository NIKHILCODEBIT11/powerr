#include<stdio.h>
int main(){
    // keep taking numbers as input from user untill enters an odd number.
    int n;
    do{
        printf("enter number : ");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n%2!=0){
            printf("odd");
            break;
        }
    }
    while(9467);
    /*WE CAN WRITE ANY NUMBER WITH while BECAUSE WE ARE WRITING NUMBER JUST FOR GETTING TRUE AND ONLY 0 GIVES FALSE
    REST ALL NUMBER GIVES TRUE.
    */
    return 0;
}