#include<stdio.h>
struct stu{
    char age;
};
int main(){
    struct stu ch[100];
    printf("enter character:");
    scanf("%c",&ch[0].age);
    printf("character is %c",ch[0].age);
    return 0;
}