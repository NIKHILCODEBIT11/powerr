#include<stdio.h>
//switch
int main(){
    int day;
    printf("enter day : \n");
    scanf("%d",&day);
    switch(day){
        case 1:printf("MONDAY \n");
        break;
        case 2:printf("TUESDAY \n");
        break;
        case 3:printf("WEDNESDAY \n");
        break;
        case 4:printf("THURSDAY \n");
        break;
        case 5:printf("FRIDAY \n");
        break;
        case 6:printf("SATURDAY \n");
        break;
        case 7:printf("SUNDAY");
        break;
        default:printf("invalid input \n");
        break;
    }
    return 0;
}
