#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter marks 1 ");
    scanf("%d",&marks[0]);
    printf("Enter marks 2 ");
    scanf("%d",&marks[1]);
    printf("Enter marks 3 ");
    scanf("%d",&marks[2]);

    // Try putting marks[3] in print statement and observe output as it is exceeding the size of array i am getting marks 3 =3682304

    printf("Marks 1 = %d , Marks 2 = %d , Marks 3 = %d\n",marks[0],marks[1],marks[2]);
    return 0;
}