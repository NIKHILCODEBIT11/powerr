#include<stdio.h>
#include<string.h>
// ENTER ADDRESS (house no., block, city, state) of 5 people.
typedef struct address{
    int houseno;
    char block;
    char city[100];
    char state[100];

} add;
void printinfo(add house); // will have to use add everytime instead of struct address.
int main(){
    add adds[5];
    add *ptr=&adds[0];
    // input
    printf("enter info for person 1 :");
    scanf("%d",(*ptr).houseno);
    scanf("%c",(*ptr).block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

     printf("enter info for person 2 :");
    scanf("%d",&adds[1].houseno);
    scanf("%c",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

     printf("enter info for person 3 :");
    scanf("%d",&adds[2].houseno);
    scanf("%c",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

     printf("enter info for person 4 :");
    scanf("%d",&adds[3].houseno);
    scanf("%c",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

     printf("enter info for person 5 :");
    scanf("%d",&adds[4].houseno);
    scanf("%c",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);

    printinfo((*ptr));
    printinfo((*(ptr+1)));
    printinfo(*(ptr+2));
    printinfo(*(ptr+3));
    printinfo(*(ptr+4));

    return 0;

}
void printinfo(add house){
    printf("The address is %d,%c,%s,%s \n",house.houseno,house.block,house.city,house.state);


}