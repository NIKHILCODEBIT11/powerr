#include<stdio.h>
/* write a program to check if a student is passed or failed.
marks>30 is pass.
marks<=30 is fail.
*/
int main(){
    int marks;
    printf("enter marks(0-100) :");
    scanf("%d",&marks);
    if(marks>30&&marks<=100){
        printf("student is passed. \n");
    }
    else if(marks<=30&&marks>0){
        printf("student is failed");
    }
    //we can even solve this by ternary code.
    else{
        printf("wrong marks");
    }
    return 0;
}
/* observe correctly used only if also observe....
write 100 and run last if will run surely no matter whatever is the mark.
*/
//doubt!!!!!!!!!!!