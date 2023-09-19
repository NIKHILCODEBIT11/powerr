#include<stdio.h>
int main(){
    FILE*fptr;  // only FILE not file or File or anything
    fptr=fopen("newfile.txt","r");
    if(fptr==NULL){
       printf("FILE DOESN'T EXIST.");  
    }
    else{
        fclose(fptr);
    }
    return 0;

}