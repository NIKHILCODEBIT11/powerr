#include<stdio.h>
//switch
/*monday-m, tuesday-t, wednesday-w, thursday-T, 
friday-f, saturday-s, sunday- S*/
int main(){
    char day;
    printf("enter day : \n");
    scanf("%c",&day);
    switch(day){
        case 'm':printf("MONDAY \n");
        break;
        case 't':printf("TUESDAY \n");
        break;
        case 'w':printf("WEDNESDAY \n");
        break;
        case 'T':printf("THURSDAY \n");
        break;
        case 'f':printf("FRIDAY \n");
        break;
        case 's':printf("SATURDAY \n");
        break;
        case 'S':printf("SUNDAY");
        break;
        default:printf("invalid input \n");
        break;
    }
    return 0;
}